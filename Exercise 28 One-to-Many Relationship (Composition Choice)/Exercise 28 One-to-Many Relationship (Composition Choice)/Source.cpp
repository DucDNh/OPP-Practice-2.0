#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Player {
public :
	string name;
	int number;
	Player(string Name, int Number) : name(Name), number(Number) {} 
};

class Team {
	string team_name;
	vector<Player> team;
public :
	Team(const string& Team_name, const vector<Player>& Team) : team_name(Team_name), team(Team) { }
	void team_mem() {
		cout << "-- " << team_name << " --" << endl;
		for (const Player& player : team)
			cout << ' ' << player.name << " (#" << player.number << ')' << endl;
	}
};

int main() {
	Player saber("Saber", 7), rider("Rider", 3);
	vector<Player> tem_team;
	tem_team.push_back(saber);
	tem_team.push_back(rider);
	Team servant("Servant", tem_team);
	servant.team_mem();
	return 0;
}