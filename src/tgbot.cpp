//
// Created by Tunay on 16.05.25.
//
#include "../lib/sqlite3.h"
#include <iostream>
#include <../lib/tglib/tgbot.h>

int SaveMessage(std::string message, int chat_id, sqlite3* DB, char* messageError, int &exit){}


int main(void){

    sqlite3* db;
    char* messageError = NULL;
    int exit = 0;
    exit = sqlite3_open("telegram.db", &db);
    const char* TOKEN = "WRITE YOUR TOKEN";
    TgBot::Bot bot(TOKEN);

    sqlite3_close(db);
    return 0;


}