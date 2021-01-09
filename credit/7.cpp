#include <bits/stdc++.h>
using namespace std;

void findSuspiciousUserId(int n, vector<vector<int>> v) {
	vector<int> user(n+1,0);
	vector<int> res;
	map<int,set<int>>Mapa;
	for(auto itr : v)
		for(int j=1;j<itr.size();j++)
            Mapa[itr[0]].insert(itr[j]);
	
	for(auto x : Mapa)
		for(auto y : x.second)
			if(Mapa.count(y) > 0 && Mapa[y].find(x.first)!=Mapa[y].end())
				user[x.first]=1, user[y]=1;
	while(Mapa.size()>0){
		for(int i = 1; i <= n; i++)
			if(user[i] > 0)   if(Mapa.count(i)>0)Mapa.erase(i);
		bool ptr =1;
		for(auto i : Mapa){
			int count = 0;
			for(auto j : i.second){
				count+=user[j];
				if(count > 1){
					user[i.first]=1;
					ptr=0;
					break;
				}
			}
		}
		if(ptr > 0)
            break;
	}
	for(int i=1;i<=n;i++){
	  	if(user[i])
	  		res.push_back(i);
	}
	for(int i =0;i< (int)res.size();i++){
	  	cout << res[i];
	  	if(i < (int)res.size()-1)
            cout << ",";
	}
}

vector<string> split(const string& str, char delim) {
    vector<string> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(str.substr(start, end - start));
    }
    return strings;
}

vector<int> splitStringToInt(const string& str, char delim) {
    vector<int> strings;
    size_t start;
    size_t end = 0;
    while ((start = str.find_first_not_of(delim, end)) != string::npos) {
        end = str.find(delim, start);
        strings.push_back(stoi(str.substr(start, end - start)));
    }
    return strings;
}
int main() {

    string firstLine;
    getline(cin, firstLine);

    int numOfQuestions = strtol(firstLine.c_str(), NULL, 10);;

    string questionAndAnswerStr;
    getline(cin, questionAndAnswerStr);

    vector<vector<int>> questionAndAnswerVecOfVec;
    vector<string> questionAndAnswerVecByComma = split(questionAndAnswerStr, ',');

    for (vector<string>::const_iterator i = questionAndAnswerVecByComma.begin(); i != questionAndAnswerVecByComma.end(); ++i) {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, ' ');
        questionAndAnswerVecOfVec.push_back(bankerPreferenceVecByAnd);
    }

    findSuspiciousUserId(numOfQuestions, questionAndAnswerVecOfVec);
    return 0;
}
