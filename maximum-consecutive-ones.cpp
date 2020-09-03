// Maximum Consectivuve ones

#include<iostream>
#include<vector>
using namespace std;

int main(){
vector<int> A = {0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int K = 3;
    int i = 0, j = 0;
        int max_val = 0;
        int len = A.size();
        int zeros = 0;
        // if(A[j] == 0)
        //     zeros++;
        int prev = -1;
        while(j<len){
            if(A[j] == 0 && prev != j)
                zeros++;
            if(zeros <= K){
                if(max_val < (j-i+1)){
                    max_val = j-i+1;
                }
                
                prev = j;
                j++;
                // if(j<len && A[j] == 0)
                //     zeros++;
            }
            else{
                if(A[i] == 0){
                    zeros--;
                }
                i++;
                prev = j;
                if(i>j){
                    
                    j = i;
                    // if(j<len && A[j] == 0)
                    //     zeros++;
                }
            }
           
        }
        cout<<"Max "<<max_val;

}
