# Quiz-Game
The code starts by including the necessary header files: iostream for input/output operations and string for string handling.
Two global variables Guess and Total are declared to keep track of the user's answers and the total score.
The program defines a class called Question, which represents each quiz question. The class has private data members to store the question text, answer choices, correct answer, and question score.
The class has a public member function setValues() to set the values of the question and answer choices.
The class also has a public member function askQuestion() that displays the question, options, asks the user for an answer, and calculates the score based on the user's response.
The main() function starts by taking the user's name, age, and asking if they are ready to take the quiz.
Ten Question objects (q1 to q10) are created, and their values are set using the setValues() function.
The askQuestion() function is called for each Question object, and the user's answers are evaluated. The total score is updated accordingly.
Finally, the program displays the total score and a message indicating whether the user passed or failed the quiz.
