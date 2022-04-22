#include <iostream>
#include <stdlib.h>

using namespace std;

string rps_[9] = {"Rock", "Scissors", "Paper", "Rock", "Scissors", "Paper", "Rock", "Scissors", "Paper"};

void play();

void rps(string user) {
	string askplay;
	int com = (rand() % 9);
	string pilcom = rps_[com];
	cout << "Computer choose " << pilcom << endl;
	if ((user == "Rock" && pilcom == "Scissors") || (user == "Paper" && pilcom == "Rock") || (user == "Scissors" && pilcom == "Paper")) {
		cout << "You win" << endl;
	}
	else if ((user == "Scissors" && pilcom == "Rock") || (user == "Rock" && pilcom == "Paper") || (user == "Paper" && pilcom == "Scissors")) {
		cout << "You Lose" << endl;
	}
	else {
		cout << "You Tie" << endl;
	}
	cout << "Want to play again (y/n) ? ";
	cin >> askplay;
	if (askplay == "y" || askplay == "Y") {
		play();
	}
	else {
		cout << "Bye !!!";
	}
}

void play() {
	int pilyou;
	cout << endl;
	for (int i=0; i<3; i++ ){
		cout << i+1 << ". " << rps_[i] << endl;
	}
	cout << "Choice ? ";
	cin>>pilyou;
	if (pilyou <= 3 && pilyou != 0){
		string yourpil = rps_[pilyou-1];
		cout << "You choose " << yourpil << endl;
		rps(yourpil);
	}
	else {
		cout << "Wrong choose";
	}
}

int main() {

	cout << "Simple Rock Papper Scissors\nBy Faiz" <<endl;
	play();

}
