#include <iostream>
using namespace std;



char get_char(){
  int rando = rand() * 2;
  if (rando > 1) {
    return '+';
  } else {
    return '-';
  }
}

char** create_play_place(){
  char** play_place = new char*[3];
  for (int i = 0; i < 3; ++i){
   play_place[i] = new char[3];
  }
    for (int i = 0; i < 3; i = i + 1){
      //cout << "Entered outer loop \n";
    for(int j = 0; j < 3; j = j + 1){
      //cout << "Entered Nested Loop \n";
      play_place[i][j] = get_char();
      //cout << "i: " << i << " j: " << j << " value: " << play_place[i][j] << endl;
    }
  }
  return play_place;
}

void display_place_place(){
  char** play_place = create_play_place();
  for( int i = 0; i < 3; i = i + 1){
    cout << "\n";
    for ( int j = 0; j <3; j = j +1){
      cout << play_place[i][j] << " ";
    }
  }
  cout << "\n\n";
}


int get_coord_y(){
  int y;
  bool valid = false;
  while (valid == false){
    cout << "What number on the y axis do you want? ";
    cin >> y;
    if ( y < 3 && y > -1){
      valid = true;
    }else {
      cout << "please choose a number between 0-2" << endl;
    }
  }
  return y;
}

int get_coord_x(){
  int x;
  bool valid = false;
  while (valid == false){
    cout << "What number on the x axis do you want? ";
    cin >> x;
    if ( x < 3 && x > -1){
      valid = true;
    }else if(cin.fail()) {
      cout << "Please enter an integer" << endl;
      cin.clear();
    } else {
      cout << "please choose a number between 0-2" << endl;
    }
  }
  return x;
}

char** change_states(int** ) {

}

int main(){
  int x = get_coord_x();
  int y = get_coord_y();

  cout << "From the main: " << x << " " << y << endl;
}
