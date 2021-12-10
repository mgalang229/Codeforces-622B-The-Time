#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	string s;
	cin >> s;
	int time;
	cin >> time;
	// extract the time to integer (from string)
	int hrs = stoi(s.substr(0, 2));
	int mins = stoi(s.substr(3, 2));
	// calculate the hours that will be added
	if (mins + time >= 60) {
		hrs += ((mins + time) / 60);
	}
	// calculate the final time
	hrs %= 24;
	mins = (mins + time) % 60;
	// convert the integer back to string
	// note: don't forget to place a colon(:) between the hours and minutes
	string ans = (hrs < 10 ? "0" + to_string(hrs) : to_string(hrs));
	ans += (":" + (mins < 10 ? "0" + to_string(mins) : to_string(mins)));
	cout << ans << '\n';
	return 0;
}
