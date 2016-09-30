#include "MyString.h"

class BaseApp
{
public:
	BaseApp() {};
	virtual void Start() = 0;
	virtual void Run() = 0;
	virtual void Update() = 0;
	virtual void End() = 0;
	
	bool gameOver = false;
};

class TextBaseAdventure : public BaseApp
{
public:

	TextBaseAdventure();

	void Start();
	void Run();
	void Update();
	void End();

	class Player;
	class Question;
	class Answer;
	
	Player * m_player;
	Question * m_questionsArry;
	Answer * m_answersArry;

	Question * m_current;

	int m_qSize = 1;
	int m_qIndex = 0;
	
	class Player
	{
	public:

		MyString m_name;

		Player() {};

		Player(MyString m)
		{
			m_name = m;
		};

		~Player() {};
	};

	class Question
	{
	public:

		MyString m_qValue;

		int m_aSize = 1;
		int m_aIndex = 0;

		Answer * m_answers;

		Question() {};

		Question(MyString ms)
		{
			m_qValue = ms;
			m_answers = new Answer[m_aSize];
		};

		Answer CreateAnswer(MyString);

		~Question() {};
	};

	class Answer
	{
	public:

		MyString m_aValue;
		Question * m_NextQuestion;

		Answer() {};

		Answer(MyString ms)
		{
			m_aValue = ms;
			m_NextQuestion = nullptr;
		};

		~Answer() {};
	};

	void PlayerName();

	//void MakeQuestion(MyString);

	//void MakeAnswer(MyString);

	bool AskQuestion(Question *);

	Question CreateQuestion(MyString, MyString, MyString, MyString);

	int AddQuestion(MyString, MyString, MyString, MyString);

	~TextBaseAdventure() {};

}; //the end of TBAG class