#define _XOPEN_SOURCE
#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <unistd.h>

int main (int argc, string argv[])
{
    if (argc == 2)
    {

    const int letters_count = 53;
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];

    char salt[3];
    memcpy(salt, hash,2);
    salt [2] ='\0';
    char key_password[5] = "\0\0\0\0\0";

    for(int fifth = 0; fifth < letters_count; fifth++)
    {
        for(int fourth = 0; fourth < letters_count; fourth++)
        {
            for(int third = 0; third < letters_count; third++)
            {
                for(int second = 0; second < letters_count; second++)
                {

                    key_password[0] = letters[second];
                    key_password[1] = letters[third];
                    key_password[2] = letters[fourth];
                    key_password[3] = letters[fifth];

                    if(strcmp(crypt(key_password,salt), hash)==0)
                    {
                        printf("%s\n", key_password);

                    }
                }
            }
        }
    }
}
}
