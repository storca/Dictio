#ifndef DICTIO_H
#define DICTIO_H

//Edit this line if you want a bigger dictionary
const int dictioMaxSize = 5;

class Dictio
{
  public:
  int arrSize;
  Dictio(int type=0);
  ~Dictio();
  bool addVar(String varName);
  bool setVar(String varName, String varValue);
  String getValue(String varName);
  
  private:
  String nameArr[dictioMaxSize];
  String dataArr[dictioMaxSize];
  //----------------------FUNC----------------------
  void initInt(int size);
  void initString(int size);
  int freeSpace();
  int findIndex(String varName);
  //----------------------VARS----------------------
  
};

#endif
