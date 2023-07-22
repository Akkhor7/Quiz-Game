// C++ program for quiz game
#include <iostream>
#include <string>
using namespace std;

int Guess;
int Total;

// Question Class
class Question {
private:
	string Question_Text;
	string Answer_1;
	string Answer_2;
	string Answer_3;
	string Answer_4;
	int Correct_Answer;
	int Question_Score;

public:
	// Setter Function
	void setValues(string, string,
				string, string,
				string, int, int);

	// Function to ask questions
	void askQuestion();
};

// Driver code
int main()
{
	cout << "\n\n\t\t\t\tTHE DAILY QUIZ"
		<< endl;
	cout << "\nPress Enter to start "
		<< "the quiz... " << endl;

	// Input
	cin.get();

	string Name;
	int Age;

	// Input the details
	cout << "What is your name?"
		<< endl;
	cin >> Name;
	cout << endl;

	cout << "How old are you?"
		<< endl;
	cin >> Age;
	cout << endl;

	string Respond;
	cout << "Are you ready to take"
		<< " the quiz " << Name
		<< "? yes/no" << endl;
	cin >> Respond;

	if (Respond == "yes" || "Yes" || "YES") {
		cout << endl;
		cout << "Good Luck!" << endl;
	}
	else {
		cout << "Okay Good Bye!" << endl;
		return 0;
	}

	// Objects of Question Class
	Question q1;
	Question q2;
	Question q3;
	Question q4;
	Question q5;
	Question q6;
	Question q7;
	Question q8;
	Question q9;
	Question q10;

	// 3 is the position of
	// correct answer
	q1.setValues("Question : Which gas is most abundant in the Earth's atmosphere?", "Oxygen",

				"Nitrogen", "Carbon Dioxide",
				"Hydrogen", 1, 10);
	q2.setValues("Question : Which company developed the first commercially successful personal computer?", "IBM",
				"Apple", "Microsoft",
				"Dell", 1, 10);
	q3.setValues("Question : Who won the Academy Award for Best Actor for his role in the movie'The revenant?", "Brad Pitt",
				"Tom Hanks", "Robert Drowney Jr.",
				"Leonardo DiCaprio", 4, 10);
	q4.setValues("Question : Which country hosted the 2016 Summer Olympics?", "England",
				"Russia", "China",
				"Brazil", 4, 10);
	q5.setValues("Question :  What is the recommended daily intake of water for an average adult?", "1 liter",
				"2 Liters", "3 Liters",
				"4 Liters", 2, 10);
	q6.setValues("Question : Which river is the longest in the world?", "Nile River",
				"Amazon River", "Mississippi River",
				"Yangtze River", 1, 10);
	q7.setValues("Question : Which programming language is known for its use in web development and is often referred to as the language of the web?", "JAVA",
				"C++", "Python",
				"JavaScript", 4, 10);
	q8.setValues("Question : Which film is the highest-grossing movie of all time (as of my knowledge cutoff in September 2021)?", "Titanic",
				"Avatar", "Avengers: Endgame",
				"StarWars", 3, 10);
	q9.setValues("Question : How many players are there on a standard soccer (football) team on the field during a match?", "10",
				"11", "12",
				"9", 2, 10);
	q10.setValues("Question : Which famous scientist formulated the theory of general relativity?", "Issac Newton",
				"Albert Einstein", "Galileo Galilei",
				"Nikola Tesla", 2, 10);

	q1.askQuestion();
	q2.askQuestion();
	q3.askQuestion();
	q4.askQuestion();
	q5.askQuestion();
	q6.askQuestion();
	q7.askQuestion();
	q8.askQuestion();
	q9.askQuestion();
	q10.askQuestion();

	// Display the total score
	cout << "Total Score = " << Total
		<< "out of 100" << endl;

	// Display the results

	// If the player pass the quiz
	if (Total >= 70) {
		cout << "Congrats you passed the"
			<< " quiz!" << endl;
	}

	// Otherwise
	else {
		cout << "Alas! You failed the quiz."
			<< endl;
		cout << "Better luck next time."
			<< endl;
	}
	return 0;
}

// Function to set the values of
// the questions
void Question::setValues(
	string q, string a1,
	string a2, string a3,
	string a4, int ca, int pa)
{
	Question_Text = q;
	Answer_1 = a1;
	Answer_2 = a2;
	Answer_3 = a3;
	Answer_4 = a4;
	Correct_Answer = ca;
	Question_Score = pa;
}

// Function to ask questions
void Question::askQuestion()
{
	cout << endl;

	// Print the questions
	cout << Question_Text << endl;
	cout << "1. " << Answer_1 << endl;
	cout << "2. " << Answer_2 << endl;
	cout << "3. " << Answer_3 << endl;
	cout << "4. " << Answer_4 << endl;
	cout << endl;

	// Display the answer
	cout << "What is your answer?(in number)"
		<< endl;
	cin >> Guess;

	// If the answer is correct
	if (Guess == Correct_Answer) {
		cout << endl;
		cout << "Correct !" << endl;

		// Update the correct score
		Total = Total + Question_Score;
		cout << "Score = " << Question_Score
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << endl;
	}

	// Otherwise
	else {
		cout << endl;
		cout << "Wrong !" << endl;
		cout << "Score = 0"
			<< " out of "
			<< Question_Score
			<< "!" << endl;
		cout << "Correct answer = "
			<< Correct_Answer
			<< "." << endl;
		cout << endl;
	}
}
