#include "Question.hpp"

void Question::SetQuestion(const string& question, const string& answer)
{
	m_question = question;
	m_answer = answer;
}

bool Question::AskQuestion()
{
	cout << "Question: " << endl;
	cout << m_question << endl;

	string answer;
	cout << "What is your answer? ";
	getline(cin, answer);

	if (answer == m_answer)
	{
		cout << "Correct" << endl;
		return true;
	}
	else
	{
		cout << "Incorrect" << endl;
		return false;
	}
}