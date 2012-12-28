/*
 * CLEANUP.cpp
 *
 *  Created on: 6 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void CLEANUP(){
	int numberOfTestCases,totalNumberJobs,completedNumberJobs;
	cin >> numberOfTestCases;
	for(int testCasesCounter=0;testCasesCounter < numberOfTestCases;testCasesCounter++){
		cin >> totalNumberJobs;
		cin >> completedNumberJobs;
		vector<bool> jobsStatus(totalNumberJobs,false);
		string ChefJobsList = NULL,AssistantJobList = NULL;
		int jobCompleted;
		for(int jobsCompletedCounter=0;jobsCompletedCounter < completedNumberJobs ; jobsCompletedCounter++){
			cin >> jobCompleted;
			jobsStatus[jobCompleted] = true;
		}

		int alternate=0;
		for(int jobCounter;jobCounter < totalNumberJobs; jobCounter++){
			if(jobsStatus[jobCounter] != true){
				if(alternate == 0){
					//Chef Job
					alternate=1;
					//ChefJobsList.append(string(jobCounter) + ' ');
				}else{
					//Assistant Job
					alternate=0;
					//AssistantJobList.append(string(jobCounter) + ' ');
				}
			}
		}
		printf("%s\n",ChefJobsList);
		printf("%s\n",AssistantJobList);
	}

}


int main(){
	CLEANUP();
}
