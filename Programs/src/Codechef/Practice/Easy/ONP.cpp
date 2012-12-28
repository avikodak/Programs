/*
 * ONP.cpp
 *
 *  Created on: 4 Dec 2012
 *      Author: Samatha
 */

#include<stdio.h>
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int PrecedenceOfOperators(char inputOperator){
	switch(inputOperator){
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
		break;
	}
	return 0;
}

void TransformExpressionInfixToPostfix(string infixExpr){
	stack<char> operators;
	string outputPostfixNotation;
	int precedenceRuleResult;
	char inputCharacter;
	for(int stringIndexCounter=0,lengthOfString = infixExpr.size();stringIndexCounter<lengthOfString;stringIndexCounter++){
		inputCharacter = infixExpr[stringIndexCounter];
		if(inputCharacter == '*'||inputCharacter == '+'||inputCharacter == '/'||inputCharacter == '-'){
			precedenceRuleResult = PrecedenceOfOperators(inputCharacter);
			while(precedenceRuleResult < operators.top()){
				//outputPostfixNotation.append(string(operators.pop()));
				outputPostfixNotation.append(operators.pop());
			}
			operators.push(precedenceRuleResult);
		}else{
			if(inputCharacter == '('){
				operators.push(0);
			}else{
				if(inputCharacter == ')'){
					while(operators.top() == '0'){
						outputPostfixNotation += operators.pop();
					}
					operators.pop();
				}else{
					outputPostfixNotation += inputCharacter;
				}
			}
		}
	}
	printf("%s",outputPostfixNotation);
}

int main(){
	string userInput;
	int noOfTestCases;
	cin >> noOfTestCases;
	for(int testCasesCounter=0;testCasesCounter<noOfTestCases;testCasesCounter++){
		cin >> userInput;
		TransformExpressionInfixToPostfix(userInput);
	}
}



