#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		int p;
		string s;
		cin >> p >> s;

		const auto& n = s.length();

		auto oss = ostringstream{};
		for (auto i = 0; i < n; ++i) {
			if (i + 1 == p) {
				continue;
			}

			oss << s[i];
		}

		cout << oss.str() << '\n';
	}

	return 0;
}