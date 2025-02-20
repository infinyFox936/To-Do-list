#include <iostream>
#include <vector>
#include <string>
using namespace std;

void showList(const vector<string>& list)
{
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }
}

void addTask(vector<string>& list)
{
    string name;
    cout << "Enter the name of the task: ";
    cin >> name;
    list.push_back(name);
    cout << "Value added." << endl;
}

void deleteLastTask(vector<string>& list)
{
    list.pop_back();
    cout << "Last value deleted." << endl;
}

int main()
{
    vector<string> list;
    int op;
    while(true)
    {
        cout << "Select your operation:" << endl;
        cout << "1 - Show list" << endl;
        cout << "2 - Add Task" << endl;
        cout << "3 - Delete last task" << endl;
        cout << "4 - Quit" << endl;
        cin >> op;
        switch (op)
        {
            case 1:
                showList(list);
                break;
            case 2:
                addTask(list);
                break;
            case 3:
                deleteLastTask(list);
                break;
            case 4:
                cout << "Exiting..." << endl;
                return 0;
                break;
            default:
                cout << "Invalid Operation" << endl;
                return 0;
                break;
        }
    }
    return 0;
}