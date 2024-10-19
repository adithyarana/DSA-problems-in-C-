# include <iostream>
# include<algorithm>
# include <vector>
 using namespace std;


// chocolate distrubution problem

int findMinDifference(vector<int>&choco, int student){

    if(choco.size()< student){
        return -1;
    }

    sort(choco.begin(), choco.end());

    int mindiff=INT8_MAX;

    for(int i=0 ;i+student-1<choco.size();i++){
        int diff=choco[i+student-1 -choco[i]];
        mindiff=min(mindiff,diff);
    }
    return mindiff;
}

 int main(){

 vector<int> chocolates = {7, 3, 2, 4, 9, 12, 56};
    int students = 3;

    int minDiff = findMinDifference(chocolates, students);

    if (minDiff != -1) {
        cout << "Minimum difference between maximum and minimum chocolates distributed: " << minDiff << endl;
    } else {
        cout << "Not enough chocolates for each student." << endl;
    }




    return 0;
 }