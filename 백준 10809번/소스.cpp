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
		// baekjoon �̶� ġ��.
		// word�� [0]�̶� a���� bcd..�̷��� �� �񱳸� �ϴ°ž�
		// �� �� ���ϴ°� ������ �� �ε��� ���� �־��ְ� ..
		// �ʱ� ��ġ�� ����̴ϱ� �������� continue�� �����ʰ� ���� 2���� �ص� �ɰͰ��⵵ 
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