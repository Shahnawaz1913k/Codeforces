#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int calculateMinimumSession(int numOfBankers, int numOfParticipants, vector<vector<int>> bankersPreferences, vector<vector<int>> participantsPreferences) {
    unordered_map<int, int> b, p;
    map<pair<int,int>, int> mt;
    int res = 0;
    for(int i = 0; i < numOfBankers; i++){
        for(int j = 0; j < (int)bankersPreferences[i].size(); j++){
            b[i+1]++;
            p[bankersPreferences[i][j]]++;
            mt[{i+1, bankersPreferences[i][j]}] = 1;
        }
    }
    for(int i = 0; i < numOfParticipants; i++){
        for(int j = 0; j < (int)participantsPreferences[i].size(); j++){
            if(!mt[{participantsPreferences[i][j], i+1}]){
                b[participantsPreferences[i][j]]++;
                p[i+1]++;
            }
        }
    }
    for(auto itr : b){
        res = max(res, itr.second);
    }
    for(auto itr : p){
        res = max(res, itr.second);
    }
    return res;
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

void printVector(vector<int> vec) {
    for (vector<int>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

void printVector(vector<string> vec) {
    for (vector<string>::const_iterator i = vec.begin(); i != vec.end(); ++i) {
        cout << *i << ' ';
    }
    cout << endl;
}

int main() {
    int numOfBankers, numOfParticipants;
    vector<vector<int>> bankersPreferences, participantsPreferences;

    cin >> numOfBankers;

    string bankersPreferencesStr;
    cin >> bankersPreferencesStr;
    vector<string> bankersPreferencesVecByComma = split(bankersPreferencesStr, ',');

    for (vector<string>::const_iterator i = bankersPreferencesVecByComma.begin(); i != bankersPreferencesVecByComma.end(); ++i) {
        vector<int> bankerPreferenceVecByAnd = splitStringToInt(*i, '&');
        bankersPreferences.push_back(bankerPreferenceVecByAnd);
    }

    string participantsPreferencesStr;
    cin >> numOfParticipants;
    cin >> participantsPreferencesStr;
    vector<string> participantsPreferencesVecByComma = split(participantsPreferencesStr, ',');

    for (vector<string>::const_iterator i = participantsPreferencesVecByComma.begin(); i != participantsPreferencesVecByComma.end(); ++i) {
        vector<int> participantPreferenceVecByAnd = splitStringToInt(*i, '&');
        participantsPreferences.push_back(participantPreferenceVecByAnd);
    }

    int result = calculateMinimumSession(numOfBankers, numOfParticipants, bankersPreferences, participantsPreferences);

    // Do not remove below line
    cout << result << "\n";
    // Do not print anything after this line

    return 0;
}
