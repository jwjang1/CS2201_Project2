// File name: TweetMgrTest.cpp
// Author: Jungwon Jang
// VUnetid: jangj1
// Email:jungwon.jang@vanderbilt.edu
// Class: CS2201
// Date:9/20/2019
// Honor statement: I have not given or received unauthorized aid on this assignment.
// Assignment Number: 2
// Description: This program will test the TweetMgr class

#include <iostream>
#include <string>
#include <stdexcept>
#include "TweetMgr.h"

int main() {
    // Here is some sample code that does some simple testing of the TweetMgr class.
    // It creates an empty TweetMgr and performs some test on it.
    // It then adds a tweet to the TweetMgr and performs some other tests on it.
    // This is only a simple sample, and is not considered to be very thorough.

    std::cout << "Testing TweetMgr..." << std::endl;

    TweetMgr tm1;   // create an empty TweetMgr object via default ctor


    if (tm1.getNumTweets() != 0) {  // test getnumTweets()
        std::cout << "Default ctor failed to create an empty TweetMgr" << std::endl;
        std::cout << "Reported that " << tm1.getNumTweets() << " tweets exist" << std::endl;
    }

    if (!tm1.getTweets().empty()) {  // test getTweets()
        std::cout << "Default ctor should produce an empty TweetMgr" << std::endl;
        std::cout << "getTweets returned the following non-empty tweets: " << tm1.getTweets()
                  << std::endl;
    }


    Tweet twt1(1,"@jack","just setting up my twttr");  //first tweet ever

    size_t index = tm1.addTweet(twt1);   // test addTweet(); TweetMgr now has one tweet

    if (index != (size_t)0) {
        std::cout << "addTweet failed to return index 0 for first insertion" << std::endl;
        std::cout << "Returned index == " << index << std::endl;
    }

    if (tm1.getNumTweets() != (size_t)1) {
        std::cout << "addTweet/getNumTweets failed after inserting one tweet" << std::endl;
        std::cout << "Reported that " << tm1.getNumTweets() << " tweets exist" << std::endl;
    }

    if (tm1.getTweets() != "@jack: just setting up my twttr (sent at 1)\n") {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets() returned the following tweets: " << tm1.getTweets() << std::endl;
    }

    if (tm1.getTweets(1) != "@jack: just setting up my twttr (sent at 1)\n") {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets(0) returned the following tweets: "
                  << tm1.getTweets(0) << std::endl;
    }

    //second tweet
    Tweet twt2(2,"@jack","sample tweet");

    size_t indexa = tm1.addTweet(twt2);   // test addTweet(); TweetMgr now has two tweets
    if (indexa < index){
        index++;
    }

    if (indexa != (size_t)1) {
        std::cout << "addTweet failed to return index 1 for second insertion" << std::endl;
        std::cout << "Returned index == " << indexa << std::endl;
    }

    if (tm1.getNumTweets() != (size_t)2) {
        std::cout << "addTweet/getNumTweets failed after inserting two tweets" << std::endl;
        std::cout << "Reported that " << tm1.getNumTweets() << " tweets exist" << std::endl;
    }

    if (tm1.getTweets() != "@jack: just setting up my twttr (sent at 1)\n@jack: sample tweet (sent at 2)\n") {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets() returned the following tweets: " << tm1.getTweets() << std::endl;
    }

    if (tm1.getTweets(2) != "@jack: sample tweet (sent at 2)\n") {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets(2) returned the following tweets: "
                  << tm1.getTweets(2) << std::endl;
    }

    //third tweet
    Tweet twt3(0,"@Jack","sample tweet");

    size_t indexb = tm1.addTweet(twt3);   // test addTweet(); TweetMgr now has three tweets

    if (indexb == index){
        index++;
        indexa++;
    }

    if (indexb != (size_t)0) {
        std::cout << "addTweet failed to return index 1 for third insertion" << std::endl;
        std::cout << "Returned index == " << indexb << std::endl;
    }

    if (index != (size_t)1) {
        std::cout << "addTweet failed to return index 1 for third insertion" << std::endl;
        std::cout << "Returned index == " << indexb << std::endl;
    }

    if (indexa != (size_t)2) {
        std::cout << "addTweet failed to shift index after third insertion" << std::endl;
        std::cout << "Returned index == " << indexa << std::endl;
    }

    if (tm1.getNumTweets() != (size_t)3) {
        std::cout << "addTweet/getNumTweets failed after inserting three tweets" << std::endl;
        std::cout << "Reported that " << tm1.getNumTweets() << " tweets exist" << std::endl;
    }

    if (tm1.getTweets() != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                           "@jack: sample tweet (sent at 2)\n") {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets() returned the following tweets: " << tm1.getTweets() << std::endl;
    }
    if (tm1.getTweets(0) != "@Jack: sample tweet (sent at 0)\n" && !tm1.getTweets(0).empty()) {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets(0) returned the following tweets: "
                  << tm1.getTweets(0) << std::endl;
    }

    //fourth tweet
    Tweet twt4(1,"@jane","sample tweet");

    size_t indexc = tm1.addTweet(twt4);   // test addTweet(); TweetMgr now has four tweets

    if (indexc == indexa){
        indexa++;
    }


    if (indexc != (size_t)2) {
        std::cout << "addTweet failed to return index 2 for fourth insertion" << std::endl;
        std::cout << "Returned index == " << indexc << std::endl;
    }

    if (indexa != (size_t)3) {
        std::cout << "addTweet failed to shift index after fourth insertion" << std::endl;
        std::cout << "Returned index == " << indexa << std::endl;
    }

    if (tm1.getNumTweets() != (size_t)4) {
        std::cout << "addTweet/getNumTweets failed after inserting four tweets" << std::endl;
        std::cout << "Reported that " << tm1.getNumTweets() << " tweets exist" << std::endl;
    }

    if (tm1.getTweets() != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                           "@jane: sample tweet (sent at 1)\n@jack: sample tweet (sent at 2)\n") {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets() returned the following tweets: " << tm1.getTweets() << std::endl;
    }

    if (tm1.getTweets(1) != "@jack: just setting up my twttr (sent at 1)\n@jane: sample tweet (sent at 1)\n"
        && !tm1.getTweets(1).empty()) {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets(1) returned the following tweets: "
                  << tm1.getTweets(1) << std::endl;
    }

    //testing copy constructor
    TweetMgr a = tm1;
    if (a.getTweets() != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                         "@jane: sample tweet (sent at 1)\n@jack: sample tweet (sent at 2)\n"){
        std::cout << "copy not successful. Tweets: " << std::endl;
    }
    a.deleteTweets();
    TweetMgr b = a;
    if (b.getTweets() != ""){
        std::cout << "copy not successful. Tweets: " << std::endl;
    }

    //testing assignment operator
    b = a; //both empty
    if (b.getTweets() != ""){
        std::cout << "assign not successful. Tweets: " << std::endl;
    }
    b = tm1; //into empty
    if (b.getTweets() != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                         "@jane: sample tweet (sent at 1)\n@jack: sample tweet (sent at 2)\n"){
        std::cout << "copy not successful. Tweets: " << std::endl;
    }
    b = a; //from empty
    if (b.getTweets() != ""){
        std::cout << "assign not successful. Tweets: " << std::endl;
    }
    a = tm1;
    b = tm1;
    a = b; //when same
    if (a.getTweets() != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                         "@jane: sample tweet (sent at 1)\n@jack: sample tweet (sent at 2)\n"){
        std::cout << "copy not successful. Tweets: " << std::endl;
    }
    b.addTweet(twt1);
    b = a;//when different
    if (b.getTweets() != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                         "@jane: sample tweet (sent at 1)\n@jack: sample tweet (sent at 2)\n"){
        std::cout << "copy not successful. Tweets: " << std::endl;
    }

    //testing alternate constructor
    try {
        TweetMgr(0);
        std::cout << "\nTHIS MESSAGE SHOULD NOT BE SEEN."
                  << "\nInvalid index exception was not thrown!!" << std::endl;
    }
    catch (std::invalid_argument &excpt) {
        std::cout << "Exception successfully thrown & caught:: " << excpt.what() << std::endl;
    }

    TweetMgr tm50 = TweetMgr(10);
    if (tm50.getNumTweets() != 0){
        std::cout << "Wrong number of tweets" << std::endl;
        std::cout << "tweet number: " << tm50.getNumTweets() << std::endl;
    }

    //testing maxSize
    if (tm1.maxSize() != 50){
        std::cout << "Unexpected number of spaces" << std::endl;
    }

    //testing addTweets()
    TweetMgr tm7;
    Tweet twt(0,"@lol","lol");
    for (size_t i = 0; i < 52; i++){
        tm7.addTweet(twt);
    }
    //grow()
    if (tm7.maxSize() != 100){
        std::cout << "Failed to expand size" << std::endl;
        std::cout << "size: " << tm7.maxSize() << std::endl;
    }

    for (size_t i = 0; i < 52; i++){
        if(tm7.getTweet(i).toString() != ("@lol: lol (sent at 0)")){
            std::cout << "Failed to expand" << std::endl;
            std::cout << tm7.getTweet(i).toString() << std::endl;
        }
    }

    //testing merge()

    TweetMgr tm15 = tm1;
    TweetMgr tm17;
    Tweet twt7(0,"@lol","lol");
    Tweet twt8(1,"@lol","lol");
    Tweet twt9(2,"@lol","lol");
    Tweet twt10(3,"@lol","lol");
    tm17.addTweet(twt7);
    tm17.addTweet(twt8);
    tm17.addTweet(twt9);
    tm17.addTweet(twt10);

    tm15.merge(tm17);//same size
    if (tm15.getTweets() != "@Jack: sample tweet (sent at 0)\n@lol: lol (sent at 0)\n"
                            "@jack: just setting up my twttr (sent at 1)\n"
                            "@jane: sample tweet (sent at 1)\n@lol: lol (sent at 1)\n"
                            "@jack: sample tweet (sent at 2)\n@lol: lol (sent at 2)\n"
                            "@lol: lol (sent at 3)\n"){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Tweets contain: " << tm15.getTweets() << std::endl;
    }
    if (tm15.maxSize() != 50){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "size: " << tm15.maxSize() << std::endl;
    }
    if (tm15.getNumTweets()!= 8){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Number of tweets: " << tm15.getNumTweets() << std::endl;
    }

    TweetMgr tm22;
    tm22.addTweet(twt7);
    tm22.addTweet(twt8);
    tm22.addTweet(twt9);
    tm15.merge(tm22); //different sizes
    if (tm15.getTweets() != "@Jack: sample tweet (sent at 0)\n@lol: lol (sent at 0)\n"
                            "@lol: lol (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                            "@jane: sample tweet (sent at 1)\n@lol: lol (sent at 1)\n"
                            "@lol: lol (sent at 1)\n@jack: sample tweet (sent at 2)\n@lol: lol (sent at 2)\n"
                            "@lol: lol (sent at 2)\n@lol: lol (sent at 3)\n"){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Tweets contain: " << tm15.getTweets() << std::endl;
    }
    if (tm15.maxSize() != 50){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "size: " << tm15.maxSize() << std::endl;
    }
    if (tm15.getNumTweets()!= 11){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Number of tweets: " << tm15.getNumTweets() << std::endl;
    }


    TweetMgr tm18 = tm15;
    TweetMgr tm19;
    for (size_t i = 0; i < 50; i++){
        tm19.addTweet(twt);
    }
    tm19.merge(tm18); //full
    if (tm19.maxSize() != 111){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "size: " << tm19.maxSize() << std::endl;
    }
    if (tm19.getNumTweets() != 61){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Number of tweets: " << tm19.getNumTweets() << std::endl;
    }

    //merging empty collections
    TweetMgr tm20;
    TweetMgr tm21;
    tm20.merge(tm21); //both empty
    if (tm20.getTweets() != ""){
        std::cout << "Unexpected tweets found" << std::endl;
        std::cout << "Tweets: " << tm20.getTweets() << std::endl;
    }
    if (tm20.maxSize() != 50){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "size: " << tm20.maxSize() << std::endl;
    }
    if (tm20.getNumTweets() != 0){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Number of tweets: " << tm20.getNumTweets() << std::endl;
    }

    tm20.addTweet(twt1);
    tm20.merge(tm21); //from empty
    if (tm20.getTweets() != "@jack: just setting up my twttr (sent at 1)\n"){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Tweets: " << tm20.getTweets() << std::endl;
    }
    if (tm20.maxSize() != 50){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "size: " << tm20.maxSize() << std::endl;
    }
    if (tm20.getNumTweets() != 1){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Number of tweets: " << tm20.getNumTweets() << std::endl;
    }

    tm21.merge(tm20); //into empty
    if (tm21.getTweets() != "@jack: just setting up my twttr (sent at 1)\n"){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Tweets: " << tm21.getTweets() << std::endl;
    }
    if (tm21.maxSize() != 50){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "size: " << tm21.maxSize() << std::endl;
    }
    if (tm21.getNumTweets() != 1){
        std::cout << "Failed to merge" << std::endl;
        std::cout << "Number of tweets: " << tm21.getNumTweets() << std::endl;
    }



    // testing getTweets(const string &sender)
    if (tm1.getTweets("@jack") != "@jack: just setting up my twttr (sent at 1)\n@jack: sample tweet (sent at 2)\n" &&
        !tm1.getTweets("@jack").empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(\"@jack\") returned the following tweets: "
                  << tm1.getTweets("@jack") << std::endl;
    }else if (tm1.getTweets("@jack").empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(\"@jack\") failed to return any tweet" << std::endl;
    }

    if (tm1.getTweets("@jane") != "@jane: sample tweet (sent at 1)\n" && !tm1.getTweets("@jane").empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(\"@jane\") returned the following tweets: "
                  << tm1.getTweets("@jane") << std::endl;
    }else if (tm1.getTweets("@jane").empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(\"@jane\") failed to return any tweet" << std::endl;
    }

    if (tm1.getTweets("@Jack") != "@Jack: sample tweet (sent at 0)\n" && !tm1.getTweets("@Jack").empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(\"@Jack\") returned the following tweets: "
                  << tm1.getTweets("@Jack") << std::endl;
    }else if (tm1.getTweets("@Jack").empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(\"@Jack\") failed to return any tweet" << std::endl;
    }

    if (!tm1.getTweets("@sender").empty()) {
        std::cout << "Unexpected tweet found" << std::endl;
        std::cout << "getTweets(\"@sender\") returned " << tm1.getTweets("@sender") << std::endl;
    }

    //testing getTweets(size_t ts)
    if (!tm1.getTweets(5).empty()) {
        std::cout << "Unexpected tweet in collection" << std::endl;
        std::cout << "getTweets(5) returned the following tweets: "
                  << tm1.getTweets(5) << std::endl;
    }

    // testing getTweet(size_t ts1, size_t ts2)
    if (tm1.getTweets(0,1) != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                              "@jane: sample tweet (sent at 1)\n" &&
        !tm1.getTweets(0,1).empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(0,1) returned the following tweets: "
                  << tm1.getTweets(0,1) << std::endl;
    }else if (tm1.getTweets(0,1).empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(0,1) failed to return any tweet" << std::endl;
    }

    if (tm1.getTweets(2,2) != "@jack: sample tweet (sent at 2)\n" && !tm1.getTweets(0,6).empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(2,2) returned the following tweets: "
                  << tm1.getTweets(1,2) << std::endl;
    }else if (tm1.getTweets(2,2).empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(2,2) failed to return any tweet" << std::endl;
    }

    if (tm1.getTweets(2,0) != "@Jack: sample tweet (sent at 0)\n@jack: just setting up my twttr (sent at 1)\n"
                              "@jane: sample tweet (sent at 1)\n@jack: sample tweet (sent at 2)\n"
        && !tm1.getTweets(2,0).empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(2,0) returned the following tweets: "
                  << tm1.getTweets(2,0) << std::endl;
    }else if (tm1.getTweets(2,0).empty()) {
        std::cout << "Expected tweet not found" << std::endl;
        std::cout << "getTweets(2,0) failed to return any tweet" << std::endl;
    }

    // testing deleteTweets()
    if (tm1.deleteTweets() != (size_t)4){
        tm1.addTweet(twt1);
        tm1.addTweet(twt2);
        tm1.addTweet(twt3);
        tm1.addTweet(twt4);
        std::cout << "deleteTweets() failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets() deleted " << tm1.deleteTweets() << " tweets" << std::endl;
    }
    tm1.deleteTweets();

    //on emtpy collection
    if (tm1.deleteTweets() != 0){
        std::cout << "deleteTweets() deleted unexpected tweets" << std::endl;
        std::cout << "deleteTweets() deleted " << tm1.deleteTweets() << " tweets" << std::endl;
    }

    if (tm1.deleteTweets("@jack") != 0){
        std::cout << "deleteTweets(\"jack\") deleted unexpected tweets" << std::endl;
        std::cout << "deleteTweets(\"jack\") deleted " << tm1.deleteTweets("@jack") << " tweets" << std::endl;
    }

    if (tm1.deleteTweets(0) != 0){
        std::cout << "deleteTweets(0) deleted unexpected tweets" << std::endl;
        std::cout << "deleteTweets(0) deleted " << tm1.deleteTweets(0) << " tweets" << std::endl;
    }

    if (tm1.deleteTweets(0,1) != 0){
        std::cout << "deleteTweets(0,1) deleted unexpected tweets" << std::endl;
        std::cout << "deleteTweets(0,1) deleted " << tm1.deleteTweets(0,1) << " tweets" << std::endl;
    }

    // testing getTweets(const string &sender) on an empty collection
    if (!tm1.getTweets("@jack").empty()) {
        std::cout << "getTweets(\"@jack\") returned unexpected tweets" << std::endl;
        std::cout << "getTweets(\"@jack\") " << tm1.getTweets("@jack") << " tweets" << std::endl;
    }

    //testing getTweets(size_t,size_t)
    TweetMgr tm5;
    Tweet twt5(3,"@jane","sample tweet");
    Tweet twt6(4,"@jane","sample tweet");
    tm5.addTweet(twt5);
    tm5.addTweet(twt6);
    if (!tm5.getTweets(0,1).empty()){
        std::cout << "getTweets(3,4) returned unexpected tweets" << std::endl;
        std::cout << "getTweets(3,4) " << tm5.getTweets(0,1) << " tweets" << std::endl;
    }

    //testing deleteTweets(size_t,size_t)
    tm5.addTweet(twt5);
    tm5.addTweet(twt6);
    if (tm5.deleteTweets(0,1) != 0){
        std::cout << "deleteTweets(0,1) returned unexpected tweets" << std::endl;
        std::cout << "deleteTweets(0,1) " << tm5.deleteTweets(0,1) << " tweets" << std::endl;
    }


    tm1.addTweet(twt1);
    tm1.addTweet(twt2);
    tm1.addTweet(twt3);
    tm1.addTweet(twt4);
    TweetMgr tm2 = tm1;
    // testing deleteTweets(size_t ts)
    if (tm2.deleteTweets(1) != (size_t)1){
        tm2.addTweet(twt1);
        tm2.addTweet(twt2);
        tm2.addTweet(twt3);
        tm2.addTweet(twt4);
        std::cout << "deleteTweets(1) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(1) deleted " << tm2.deleteTweets(1) << " tweets" << std::endl;
    }
    TweetMgr tm4 = tm1;
    if (tm4.deleteTweets(0) != (size_t)0){
        tm4.addTweet(twt1);
        tm4.addTweet(twt2);
        tm4.addTweet(twt3);
        tm4.addTweet(twt4);
        std::cout << "deleteTweets(0) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(0) deleted " << tm4.deleteTweets(0) << " tweets" << std::endl;
    }
    TweetMgr tm16 = tm1;
    if (tm16.deleteTweets(3) != (size_t)4){
        tm16.addTweet(twt1);
        tm16.addTweet(twt2);
        tm16.addTweet(twt3);
        tm16.addTweet(twt4);
        std::cout << "deleteTweets(3) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(3) deleted " << tm16.deleteTweets(3) << " tweets" << std::endl;
    }

    // testing deleteTweets(size_t ts1, size_t ts2)
    TweetMgr tm6 = tm1;
    if (tm6.deleteTweets(0,1) != (size_t)3){
        tm6.addTweet(twt1);
        tm6.addTweet(twt2);
        tm6.addTweet(twt3);
        tm6.addTweet(twt4);
        std::cout << "deleteTweets(0,1) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(0,1) deleted " << tm6.deleteTweets(0,1) << " tweets" << std::endl;
    }
    TweetMgr tm8 = tm1;
    if (tm8.deleteTweets(2,2) != (size_t)1){
        tm8.addTweet(twt1);
        tm8.addTweet(twt2);
        tm8.addTweet(twt3);
        tm8.addTweet(twt4);
        std::cout << "deleteTweets(2,2) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(2,2) deleted " << tm8.deleteTweets(2,2) << " tweets" << std::endl;
    }
    TweetMgr tm10 = tm1;
    if (tm10.deleteTweets(2,0) != (size_t)4){
        tm10.addTweet(twt1);
        tm10.addTweet(twt2);
        tm10.addTweet(twt3);
        tm10.addTweet(twt4);
        std::cout << "deleteTweets(2,0) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(2,0) deleted " << tm10.deleteTweets(2,0) << " tweets" << std::endl;
    }
    TweetMgr tm11 = tm1;
    if (tm11.deleteTweets(5,6) != (size_t)0){
        tm11.addTweet(twt1);
        tm11.addTweet(twt2);
        tm11.addTweet(twt3);
        tm11.addTweet(twt4);
        std::cout << "deleteTweets(5,6) failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(5,6) deleted " << tm11.deleteTweets(5,6) << " tweets" << std::endl;
    }

    // testing deleteTweets(const string &sender)
    TweetMgr tm12 = tm1;
    if (tm12.deleteTweets("@jack") != (size_t)2){
        tm12.addTweet(twt1);
        tm12.addTweet(twt2);
        tm12.addTweet(twt3);
        tm12.addTweet(twt4);
        std::cout << "deleteTweets(\"@jack\") failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(\"@jack\") deleted " << tm12.deleteTweets("@jack") << " tweets" << std::endl;
    }

    TweetMgr tm13 = tm1;
    if (tm13.deleteTweets("@Jack") != (size_t)1){
        tm13.addTweet(twt1);
        tm13.addTweet(twt2);
        tm13.addTweet(twt3);
        tm13.addTweet(twt4);
        std::cout << "deleteTweets(\"@Jack\") failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(\"@Jack\") deleted " << tm13.deleteTweets("@Jack") << " tweets" << std::endl;
    }

    TweetMgr tm14 = tm1;
    if (tm14.deleteTweets("@jane") != (size_t)1){
        tm14.addTweet(twt1);
        tm14.addTweet(twt2);
        tm14.addTweet(twt3);
        tm14.addTweet(twt4);
        std::cout << "deleteTweets(\"@jane\") failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(\"@jane\") deleted " << tm14.deleteTweets("@jane") << " tweets" << std::endl;
    }

    TweetMgr tm3 = tm1;
    if (tm3.deleteTweets("@random") != (size_t)0){
        tm3.addTweet(twt1);
        tm3.addTweet(twt2);
        tm3.addTweet(twt3);
        tm3.addTweet(twt4);
        std::cout << "deleteTweets(\"@random\") failed to delete the right number of tweets" << std::endl;
        std::cout << "deleteTweets(\"@random\") deleted " << tm3.deleteTweets("@random") << " tweets" << std::endl;
    }



// uncomment the following lines if you are running the program in a
// DOS or terminal window and you want the window to stay open when
// the testing is done.
// std::cout << "\nEnd of tests. Press enter to exit.";
// char tt;
// tt = std::cin.get();

}
