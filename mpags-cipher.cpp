#include <iostream>
#include <string>
#include <vector>
// argc is the number of arguments passed. argv is the actual arguments.
int main(int argc, char* argv[])
{
 // Convert command line arguments into usable things
 std::vector<std::string>cmdLineArgs{argv,argv+argc};


int i = cmdLineArgs.size();
for(int j=0; j<i; j++)
{
// Print Command Line Argument
//std::cout << cmdLineArgs[j] <<std::endl;
 

// if loop to check if user enters -h or --help. Gives help and quits.
 	if(cmdLineArgs[j] == "-h" || cmdLineArgs[j] == "--help")
  	{
         std::string help{"Ask Tom and Mark\n"};
	 std::cout << help << std::endl;
	 return 0;
	}
// if loop to check if user enters -v. Gives version and quits.
        else if(cmdLineArgs[j] == "--version")
        {
         std::string version{"Week 1 Version\n"};
         std::cout << version << std::endl;
	 return 0;
        }
// if loop checks to see if you input a file.     
        else if(cmdLineArgs[j] == "-i")
        {
// check if there is an argument after -i        	
		if(j+1 == i)
                { 
                 std::string noinp{"No input detected\n"};
                 std::cout << noinp << std::endl;
	         return 0;
                }

         std::string input{"You have inputted a file\n"};
         std::cout << input << std::endl;
        }
// if loop checks to see if you output a file.  
        else if(cmdLineArgs[j] == "-o")
        {

         // check if there is an argument after -o        	
		if(j+1 == i)
                { 
                 std::string noout{"No output detected\n"};
                 std::cout << noout << std::endl;
	         return 0;
                } 

         std::string output{"You have outputted a file\n"};
         std::cout << output << std::endl;
        }
}

// Take each letter from user input and in each case:
 char in_char{'x'};
 std::string corinput{""};
 while(std::cin >> in_char)
   {
     // Loop until the user 
     // presses Enter then Ctrl+D

     // Convert to upper case
     // Ignore any other non alpha characters
 	 if(isalpha(in_char))
         {
  	   in_char = toupper(in_char);
  	   corinput += in_char;
         }

      // Change numbers to words
         switch (in_char)
 	{  
   	  case '0': 
          corinput += "ZERO";
    	  break;
          case '1': 
          corinput += "ONE";
    	  break;
          case '2': 
          corinput += "TWO";
    	  break;
          case '3': 
          corinput += "THREE";
    	  break;
          case '4': 
          corinput += "FOUR";
    	  break;
          case '5': 
          corinput += "FIVE";
    	  break;
          case '6': 
          corinput += "SIX";
    	  break;
          case '7': 
          corinput += "SEVEN";
    	  break;
          case '8': 
          corinput += "EIGHT";
    	  break;
          case '9': 
          corinput += "NINE";
    	  break;
	}

    }

// print out the new string
  std::cout << corinput <<std::endl;
} 






