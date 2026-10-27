
#include <iostream>
#include <vector>
#include <string>
using namespace std;

void displayList(vector<string>& toDoList)
{
    cout << "\n THE PERFECT TO-DO LIST1 ";

    if (toDoList.empty())
    {
        cout << "Nothing to do. Bro has achieved enlightenment.\n";
    }

    for (int i = 0; i < toDoList.size(); i++)
    {
        cout << i + 1 << ". " << toDoList[i] << endl;
    }

    cout << "=\n";
}

int main()
{
    vector<string> toDoList =
    {
        "Pluck 23 oranges from my neighbor's garden and deny everything",
        "Argue with a mosquito for violating my personal space",
        "Become a billionaire before my phone battery hits 10%",
        "Practice my villain laugh in front of the bathroom mirror",
        "Convince my bank account that we are NOT in a recession",
        "Go outside and touch grass (grass must not touch back)",
        "Learn to teleport because traffic is getting disrespectful",
        "Send my enemies a strongly worded invoice for wasting my time",
        "Investigate who finished the food in the fridge",
        "Teach a pigeon financial literacy and compound interest",
        "Buy a Lamborghini in GTA and pretend the dealership knows me",
        "Apologize to my bed for leaving it every morning",
        "Check if my neighbors are suspiciously rich from orange sales",
        "Become mysterious and stop explaining myself to people",
        "Stare at the ceiling until a million-dollar idea downloads",
        "Practice saying 'I'm outside' while still in my bedroom",
        "Evict the demons living rent-free in my Wi-Fi router",
        "Start a gym membership and at least visit the building",
        "Invent a remote control for people who talk too much",
        "Become the CEO of doing absolutely nothing",
        "Make peace with my alarm clock (temporary ceasefire)",
        "Open the fridge for the 17th time expecting new content",
        "Write my autobiography: 'Trust Me Bro, It Was Strategic'",
        "make a Reuben sandwich"
    };

    int choice;

    do
    {
        cout << "\nTHE PRODUCTIVITY DELUSION MACHINE\n";
        cout << "1. Display my responsibilities\n";
        cout << "2. Add a new side quest\n";
        cout << "3. Remove a completed mission\n";
        cout << "4. Abandon society and exit\n";
        cout << "Choose an option: ";

        cin >> choice;
        cin.ignore();

        if (choice == 1)
        {
            displayList(toDoList);
        }
        else if (choice == 2)
        {
            string task;

            cout << "Enter your new side quest: ";
            getline(cin, task);

            toDoList.push_back(task);

            cout << "Mission added. Your suffering has increased.\n";
        }
        else if (choice == 3)
        {
            displayList(toDoList);

            int taskNumber;

            cout << "Enter the task number to delete: ";
            cin >> taskNumber;

            if (taskNumber >= 1 &&
                taskNumber <= toDoList.size())
            {
                cout << "Mission eliminated: "
                     << toDoList[taskNumber - 1] << endl;

                toDoList.erase(toDoList.begin()
                               + taskNumber - 1);
            }
            else
            {
                cout << "Invalid mission number. Try again.\n";
            }
        }
        else if (choice == 4)
        {
            cout << "Goodbye. The oranges remain unaccounted for.\n";
        }
        else
        {
            cout << "Invalid choice. Even the computer is disappointed.\n";
        }

    } while (choice != 4);

    return 0;
}
