#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int total = 0;
    queue<int> q;
    
    for (int i = 0; i < truck_weights.size(); i++) {
        int cWeight = truck_weights[i];
        while(true){
            if (q.size() == bridge_length) {
                total -= q.front();
                q.pop();
            }
            else {
                if (cWeight + total > weight) {
                    q.push(0); 
                    answer++;
                }
                else {
                    q.push(cWeight); 
                    total += cWeight;
                    answer++;
                    break;
                }
            }
        }
    }
    return answer + bridge_length;
}
