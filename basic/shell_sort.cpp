#include <iostream>
#include <vector>

using namespace std;

// Shell Sort
// https://github.com/Shuai-Xie/sort/blob/master/main.cpp
void shellSort_loopMethod(vector <int> &v) {
	for (int gap = v.size() / 2; gap > 0; gap--) {
		for (int i = gap; i < v.size(); i++) {
			if (v[i] < v[i - gap]) {
				int x = v[i];
				int j = i - gap;

				while (x < v[j] && j >= 0) {
					v[j + gap] = v[j];
					j -= gap;
				}

				v[j + gap] = x;
			}
		}
	}
}

void shellSort_recursionMethod(vector<int> &v, int gap) {
	if (gap == 0) return;

	for (int i = gap; i < v.size(); i++) {
		if (v[i] < v[i - gap]) {
			int x = v[i];
			int j = i - gap;

			while (x < v[j] && j >= 0) {
				v[j + gap] = v[j];
				j -= gap;
			}

			v[j + gap] = x;
		}
	}

	gap--;

	shellSort_recursionMethod(v, gap);
}

int main() {
  int arr[] = {
    6,
    5,
    4,
    3,
    2,
    1
  };

  vector<int> v1(begin(arr), end(arr));
	vector<int> v2(v1);

  shellSort_loopMethod(v1);
	shellSort_recursionMethod(v2, v2.size() / 2);

	for (int i: v1) cout << i;
	cout << endl;
	for (int i: v2) cout << i;
	cout << endl;

  return 0;
}