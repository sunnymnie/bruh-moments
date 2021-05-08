# Machine Learning - Analysis
A mixture of small projects culminating in a possible classification / regression Scikit-Learn model that, given inputs of % matches to technical indicators, produce price prediction

## Month-end goal (May 31st):
A Scikit-learn model that predicts the price of Bitcoin given matches to technical indicators and other indicators like the stock-to-flow model

## Further goals:
A filter that can spot promising alt-coins or a model that can predict alt-coin price movements. 

## Plan:
1. Find out where to get my data and find the most efficient method
2. Learn about technical analysis and which indicators I think my next programs must/should/could include. 
3. Find if there exists any dependencies that automatically creates technical indicators from time-series-data. 
    - If yes: learn to use them
    - If yes or no: aim to make some technical indicators by hand (especially those that are more obscure, such as logarithmic-growth)
4. Create a price-analyzer program. Regard to information about this project below
5. Create scikit-learn model based on dataset from price-analyzer program. 


### Price analyzer program
This program will end up forming the backbone of the inputs to the ml model, but can exist as a separate equally useful program. 

Program purpose: Given past price movements of currency X, gives a dictionary (or dataframe) containing values to all existing technical indicators. As an extension, can perform some brute-force simple arithmetic to give a semi-meaningful number result. 

Remake for ml model: return dataframe with columns for each indicator (Make sure this is consistent with what's taught)

## Plan results + notes + directory
### 1. Where to get my data:

Requirements:
- Free and reliable
- Is continually updated
- 

**[kaggle](https://www.kaggle.com/tencars/392-crypto-currency-pairs-at-minute-resolution?select=algusd.csv)**

Pros: `1 minute detail`

Cons: 

Unknowns: `reliability` `updated`

**binance**

Will probably go with Binance. If it works I'm probably not going to test others unless Binance breaks. 

[where to get past crypto data](https://fxgears.com/index.php?threads/how-to-acquire-free-historical-tick-and-bar-data-for-algo-trading-and-backtesting-in-2020-stocks-forex-and-crypto-currency.1229/#post-19305)


### 2. Technical analysis 

#### Sources to research:
- [Coin Bureau](https://www.youtube.com/watch?v=lW3eWIj3Q04)
