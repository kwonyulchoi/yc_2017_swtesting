#include <string>
using namespace std;


int testmodule_EP_BVA() {
  return 7;
}

string GetGrade(int Score)
{
    string grade = "Wrong Input Value";

    if (Score <= 100 && Score >= 90 )
    {
        grade ="A";
    }
    else if (Score < 90 && Score >= 70 ) {
        grade ="B";
    }
    else if (Score < 70 && Score >= 50 ) {
        grade ="C";
    }
    else if (Score < 50 && Score >= 30 ) {
        grade ="D";
    }
    else if (Score < 30 && Score >= 0) {
        grade ="F";
    }

    return grade;
}
