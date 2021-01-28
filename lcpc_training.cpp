

#include <iostream>

#include <fstream>
#include <cmath>
using namespace std;

void problemB() {
	ifstream infile;
	infile.open("input/dahab.in");

	string n;
	infile >> n;
	printf("%d\n", n.length());
}

void problemG() {

	ifstream infile;
	infile.open("input/string.in");

	int k;
	char c;

	infile >> k;
	infile >> c;

	int charValue = int(c) + k;
	if (charValue > 122) {
		charValue = 97 + (k - 1);
	}

	cout << char(charValue);
}

void problemA() {

	ifstream infile;
	infile.open("input/or.in");

	int cases;

	infile >> cases;
	int L, R;

	for (int c = 0; c < cases; c++)
	{
		int count = 0;
		infile >> L;
		infile >> R;

		for (int i = L; i <= R; i++) {
			for (int j = L; j <= R; j++)
			{
				if ((i + j) == (i | j)) {
					count++;
				}
			}
		}

		printf("%d\n", count % (int)(pow(10, 9) + 7));
	}


}


void problemD() {

	ifstream infile;
	infile.open("input/wcup.in");

	int team1, team2;


	while (true) {

		infile >> team1 >> team2;

		if (team1 >= 0 && team2 >= 0)
			printf("%d\n", (team1 + team2));
		else
			break;

	}
}

int main()
{
	
	

}

