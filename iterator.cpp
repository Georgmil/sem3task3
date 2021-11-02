#include <iostream>
#include <vector>

using namespace std;

void data2d(vector<vector<int>>& twod, vector<vector<int>>::iterator row, vector<int>::iterator col, int rowl, int coll) {
    //// Poluchaem dannie 2d massiva
    int i = 1;
    for (row = twod.begin(); row!=twod.end(); row++) {
        cout << "Please enter " << i << " st row of " << coll << " elemtnts" << endl;
        for (col=row->begin(); col !=row->end(); col++) {
             cin>>*col;
            
        }
        i++;
    }
}
void print2d(vector<vector<int>>& twod, vector<vector<int>>::iterator row, vector<int>::iterator col) {
    cout << "Vi vili vot takoj dvuhmernij massiv : \n" << endl;
    for (row = twod.begin(); row != twod.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
            cout << *col << " ";
        }
        cout << endl;
    }
}
void d2tod1(vector<vector<int>> & twod, vector<vector<int>>::iterator row, vector<int>::iterator col,int coll, vector<int>::iterator it) {
    int q = 0, w = 0,t=0;
    for (row = twod.begin(); row != twod.end(); row++) {
        w = 0;
        for (col = row->begin(); col != row->end(); col++) {
            *(it + (q * coll) + w) = *col;
            w++;
        }
        q++;
    }
}

void print1d(vector<int>::iterator it,int coll,int rowl) {
    cout << "\n\nPri perevode v odnomernij massiv poluchaem:" << endl;
    for (int i = 0; i < (rowl * coll); i++) {
        cout << *(it + i) << " ";
    }
    cout << "\n\n";
}

void d1tod2(vector<vector<int>>& twod, vector<vector<int>>::iterator row, vector<int>::iterator col, vector<int>::iterator it,int rowl,int coll) {
    int z, x;
    for (int i = 0; i < rowl * coll; i++) {
        z = i / coll;
        x = i % coll;
        row = twod.begin() + z;
        col = row->begin() + x;
        *col = *it + i;
    }
}

void print2d2(vector<vector<int>>& twod, vector<vector<int>>::iterator row, vector<int>::iterator col) {
    cout << "Pri perevode obratno pulchaem : \n" << endl;
    for (row = twod.begin(); row != twod.end(); row++) {
        for (col = row->begin(); col != row->end(); col++) {
            cout << *col << " ";
        }
        cout << endl;
    }
}


int main()
{

    int rowl,coll,i = 1, a;
     cout << "How many columns do you want: " << endl;
     cin >> coll;

     cout << "How many rows do you want: " << endl;
     cin >> rowl;

    vector<vector<int>>twod(rowl,vector<int>(coll));
    vector<vector<int>>::iterator row;
    vector<int>::iterator col;

    vector<int>oned(coll*rowl);
    vector<int>::iterator it;
    it = oned.begin();

 
    data2d(twod, row, col, rowl, coll);
    print2d(twod, row, col);
    d2tod1(twod, row, col, coll, it);
    print1d(it, coll, rowl);
    d1tod2(twod, row, col, it, rowl, coll);
    print2d2(twod, row, col);
    

    twod.clear();
    oned.clear();

   
    











}

