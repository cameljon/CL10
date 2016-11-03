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