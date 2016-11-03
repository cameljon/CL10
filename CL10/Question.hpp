#ifndef QUESTION_HPP
#define QUESTION_HPP

#include <string>
#include <iostream>
using namespace std;

class Question
{
private:
	string m_question, m_answer;

public:
	void SetQuestion(const string& question, const string& answer);
	bool AskQuestion();
};

#endif
