#include <bits/stdc++.h>
using namespace std;

vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries){
	vector <int> rec;
        for (auto val : words){
            int s =  val.size()-1;
            if(val[0] == 'a' or val[0] == 'e' or val[0] == 'i' or val[0] == 'o' or val[0] == 'u'){
                if(val[s] == 'a' or val[s] == 'e' or val[s] == 'i' or val[s] == 'o' or val[s] == 'u'){
                    rec.push_back(1);
                }
                else{
                    rec.push_back(0);
                }
            }
            else{
                rec.push_back(0);
            }
        }
        vector <int> final;
        
        for (auto val : queries){
        	int count = 0;
        	for (int i = val[0] ; i <= val[1] ; i++){
        		count += rec[i];
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