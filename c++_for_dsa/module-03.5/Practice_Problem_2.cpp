// Question : Create a dynamic object named dhoni of the following class.Don’t use a constructor here,
// that means you need to fill the data by yourself.Cricketer
// {
//     jersey_no;
//     country;
// }
// Then make another dynamic object named kohli and copy
// the data of the dhoni object to kohli and after that delete the dhoni object.
// Then print the jersey_no and country of kohli object.Note : At first try to do this,
// kohli = dhoni and see if it gives the correct output.If not, then think deeply why it
// didn’t work and try to copy the data manually like kohli->jersey_no = dhoni->jersey_no;

#include <bits/stdc++.h>
using namespace std;

class Cricketer
{
public:
    int jersey_no;
    char country[20];
};

int main()
{
    char india[20] = "India\0";

    Cricketer *dhoni = new Cricketer;
    dhoni->jersey_no = 20;
    strcpy(dhoni->country, india);

    Cricketer *kohli = new Cricketer;

    kohli = dhoni;

    delete dhoni;

    cout << kohli->jersey_no << " " << kohli->country << endl;
    cout << dhoni->jersey_no << " " << dhoni->country << endl;

    return 0;
}