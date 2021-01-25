#include <iostream>
#include <string>
using namespace std;
int main() {
	char a[26]={ 'a', 'b', 'c', 'd', 'e' , 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y','z' };
	int idx[26] = {};
	int count[26] = {};
	string word;
	getline(cin, word);
	for (int i = 0; i < word.size(); i++) {
		// baekjoon 이라 치자.
		// word의 [0]이랑 a부터 bcd..이렇게 다 비교를 하는거야
		// 그 중 속하는게 있으면 그 인덱스 값을 넣어주고 ..
		// 초기 위치인 경우이니까 쓸데없이 continue를 넣지않고 조건 2개로 해도 될것같기도 
		for (int j = 0; j < 26; j++) {
			if (a[j] == word[i] && count[j]== 0)
			{
				idx[j] = i;
				count[j] += 1;
			}

		}
	}	
	for (int y = 0; y < 26; y++) {
		if (idx[y] == 0 && count[y] == 0)
			idx[y] =-1;
	}
	
	for (int x = 0; x < 26; x++) {
		cout << idx[x] << " ";
	}
	return 0; 
}