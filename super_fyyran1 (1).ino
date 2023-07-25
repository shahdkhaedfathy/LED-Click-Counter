int countre=0
int reading

void setup()
{
  pinMode(6,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
}
void loop()
{
  reading=digitalread(7);
  if(reading==1)
  { 
     counter++;
    
    
  if(counter==1)
   {digitalWrigh(6,1);}
    else if(counter==2)
    {
    digitalWrigh(5,1);
    digitalWrigh(6,0) ; 
  }
  
  else if(counter==3)
  {
   digitalWrigh(4,1);
    digitalWrigh(5,0); 
  }
  
 else if(counter==4)
  {
   digitalWrigh(4,0);
   counter=0;
 }
    
  
  delay(250);
}

}