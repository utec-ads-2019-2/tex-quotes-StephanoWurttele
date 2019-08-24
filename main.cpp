#include <iostream>
#include <string>


using namespace std;

int main() {
	string words;
	string answer;
	char replace1='`';
	char replace2='\'';
	int length;
	int temp=0;
	while(getline(cin,words)){
		length = words.size();
		for (int i=0;i<length;i++){
			if (words[i]=='"'){
				if (temp%2==0){
					words[i]=replace1;
					words.insert(i,1,replace1);
				}
				else{
					words[i]=replace2;
					words.insert(i,1,replace2);
				}
				temp++;
			}
		length = words.size();
		}
		cout<<words<<endl;
	}
    return 0;
}
