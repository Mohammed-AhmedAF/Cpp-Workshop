#include <iostream>

using namespace std;

int main(void)
{
    //Variable to be used to hold user input
    //Another comment
    //Anothter comment to test changing userEmail
    int score{};

    cout << "Enter your score on the exam {0-100}" << endl;
    cin >> score;

    char letter_grade {};

    if (score >= 0 && score <= 100)
    {   
        if (score >= 90)
        {
            letter_grade = 'A';
        }
        else if (score >= 80)
        {
            letter_grade = 'B';
        }
        else if (score >= 70)
        {
            letter_grade = 'C';
        }
        else if (score >= 60)
        {
            letter_grade = 'D';
        }
        else
        {
            letter_grade = 'F';
        }

        cout << "Your grade is " << letter_grade << endl;
        if (letter_grade == 'F')
        {
            cout << "Sorry, you must repeat this class." << endl;
        }
        else
        {
            cout << "That is a passing grade." << endl;
        }
    }
    else
    {
        cout << "The entered number is invalid." << endl;
    }
}