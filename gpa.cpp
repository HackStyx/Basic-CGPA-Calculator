#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int totalSubjects;
  cout << "Enter the total number of subjects: ";
  cin >> totalSubjects;

  int totalCredits = 0;
  int totalGradePoints = 0;

  cout << "\nEnter details for each subject:\n";

  for (int i = 1; i <= totalSubjects; ++i)
  {
    double marks, credits;

    cout << "\nEnter marks for subject " << i << " out of 100: ";
    cin >> marks;

    cout << "Enter credits for subject " << i << ": ";
    cin >> credits;
    
    totalCredits += credits;
    
    double gradePoints;
    if (marks >= 90)
    {
      gradePoints = 10;
    }
    else if (marks >= 80)
    {
      gradePoints = 9;
    }
    else if (marks >= 70)
    {
      gradePoints = 8;
    }
    else if (marks >= 60)
    {
      gradePoints = 7;
    }
    else if (marks >= 50)
    {
      gradePoints = 6;
    }
    else if (marks >= 40)
    {
      gradePoints = 5;
    }
    else
    {
      gradePoints = 0;
    }

    totalGradePoints += gradePoints * credits;
  }

  int GPA = totalGradePoints / totalCredits;
  cout << "\nTotal Credits: " << totalCredits << endl;
  cout << "GPA out of 10: " << GPA << endl;

  return 0;
}
