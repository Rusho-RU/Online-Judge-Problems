#include <stdio.h>
enum Security_Levels
{
    black_ops,
    top_secret,
    secret,
    non_secret
}my_security_level;
int
  main( int number_of_args, char* arg_list[] )
  {
     my_security_level = top_secret;

     if ( my_security_level == black_ops )
       {
          printf("Welcome Mister Bond\n");
          open_safe();
          open_door();
       }
    else if ( my_security_level == top_secret )
       {
          printf("Welcome Q\n");
          open_door();
       }
    else if ( my_security_level == secret )
       {
          printf("Please leave Now\n");
       }
    else if ( my_security_level == non_secret )
       {
          printf("Warning, The Police have been Called\n");
          printf("Surrender yourself to them immediately!\n");
          call_police();
       }

    return 0;
  }
