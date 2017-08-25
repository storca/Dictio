#include "Arduino.h"
#include "dictio.h"

//Whereas type = 0 is string -> string
//        type = 1 is string -> int
Dictio::Dictio(int type)
{
  arrSize = sizeof(nameArr);
}
Dictio::~Dictio()
{
  
}

bool Dictio::addVar(String varName)
{
  int index = Dictio::freeSpace();
  if(index >= 0)
  {
    nameArr[index] = varName;
    return true;
  }
  else
  {
    return false;
  }
}
int Dictio::freeSpace()
{
  for(int i=0; i<=arrSize-1; i++)
  {
    if(nameArr[i] == NULL)
    {
      return i;
    }
  }
  return -1;
}
int Dictio::findIndex(String varName)
{
  for(int i=0; i<=arrSize-1; i++)
  {
    if(nameArr[i] == varName)
    {
      return i;
    }
  }
  return -1;
}

bool Dictio::setVar(String varName, String varValue)
{
  int index = Dictio::findIndex(varName);
  if(index >= 0)
  {
    dataArr[index] = varValue;
    return true;
  }
  else
  {
    return false;
  }
}
String Dictio::getValue(String varName)
{
  int index = Dictio::findIndex(varName);
  if(index >= 0)
  {
    return dataArr[index];
  }
  else
  {
    return "";
  }
}

