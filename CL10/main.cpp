#include <iostream>
using namespace std;

#include "Question.hpp"

int main()
{
	int score = 0;

	Question question[3];

	question[0].SetQuestion("What is 2 + 2?", "4");
	question[1].SetQuestion("What is 3 + 3?", "6");
	question[2].SetQuestion("What is 2 + 1?", "3");

	for (int i = 0; i < 3; i++)
	{
		if (question[i].AskQuestion())
		{
			score++;
		}
	}

	cout << "Final score: " << score << endl;

	return 0;
}

/*
What is the advantage of using an array of Questions, rather than declaring each question as a separate variable?
	You can ask the questions using an array. If you set the questions with another function you could do the same.

This question type is essentially a "fill in the blank". How would you implement other types of questions, like True / False or Multiple Choice?
	The answer could be a bool for true or false and you can use an array for multiple choices.

For each type of question, what is in common? What is different?
	The question will always be a string. The answers can be different types should always return true or false.
	
Based on what is common, can you figure out what would go in a QuestionBase class?

Based on what is different, can you figure out what type of child classes of QuestionBase you would declare, what member variables they would have, and how the AskQuestion function work change?


*/
