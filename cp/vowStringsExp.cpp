#include <bits/stdc++.h>
using namespace std;

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries){
		int size  = words.size();
        for (int i = 0; i < size; i++){
            int s =  words[i].size()-1;
            if(words[i][0] == 'a' or words[i][0] == 'e' or words[i][0] == 'i' or words[i][0] == 'o' or words[i][0] == 'u'){
                if(words[i][s] == 'a' or words[i][s] == 'e' or words[i][s] == 'i' or words[i][s] == 'o' or words[i][s] == 'u'){
                    words[i] = '1';
                }
                else{
                    words[i] = '0';
                }
            }
            else{
                words[i] = '0';
            }
        }
        vector <int> final;
        
        for (auto val : queries){
        	int count = 0;
        	for (int i = val[0] ; i <= val[1] ; i++){
        		if (words[i] == "1") count += 1;
        		// cout << endl << "* " << val[0]<<val[1] << "   count = " << count << endl;
        	}
        	final.push_back(count);
        }


        for (int i = 0; i < final.size(); i++){
        	cout << final[i];
        }

        return final;
}

int main (){
	
	int n,m;
	cin >> n;
	vector <string> words;
	for (int i = 0; i<n; i++){
		string temp ;
		cin >> temp;
		words.emplace_back(temp);
	}


	vector<vector <int>> queries;
	cin >> m;
	for (int i = 0; i<m; i++){
		int a,b;
		cin >> a >> b;
		queries.push_back({a,b});
	}

    vowelStrings(words, queries);
}