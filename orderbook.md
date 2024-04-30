-> market order : 
-> tnis is a directive given by traders to bur or sell a security at best avialable current market price. 
-> depends ont he market condiiton and decided by trader to sell or buy which derivative
-> changes in rapidly changing market
-> input : quantity 

-> limit order : 
-> A limit order is a directive to buy or sell at specific price or better . 
-> in this order trader has to give the quantity and the price he want to buy or sell on the particular derivative  
-> limit order are not gauranteddd to be filled but give trader the thing to control over price execution.
-> input : quantity , price

-> Stop order :
-> alos known as 'stop-loss order'  , this is an order placed to sell a security once it reaches a certain price known as stop price
-> if is to stop the traders loss beyond a specific point
-> when a  ttrioggerd point is reached it be sell the stock and the best price avialble or the market price , so becomes the market order then 
-> input : quantity , stop-price

-> GoordToCancel order: (GTC)
->  a type of order that an inverstor may place to buy or sell a seciruty that remains actiev untill either the order is filled or investor cancels it
-> maximum time ot keep the GTC open is like 90 days
-> basically used fo day trading .   but traders set it to the 30-90 days ause if someone forgets about it , then it be gets placed instead of canceling 
-> keep order active unitll it is filled or canceled , regardless of the type of the order 
-> risk is like of forgetting , technical issue in broker system about it , mising oppurtunity , fixing capital in this 
-> input : quantity , price , timeframe

-> Also like
-> GoodTillDay (GDC) 
-> input : quantity , price , expiration date
-> GOODTillMonth (GDM)
-> input : quantity , price , expiration month
-> after day and month if not filleed get cancelled and rest same like GTC

-> FIll-Or-Kill order: 
-> time in force order
-> used by traders to place a large qunatity of orders of stock.
-> instrcut broke to execute a transcation at sepcified price immmideitely and completely  or not at all.
-> FIK -> combintation of AON(all-or-none)  and IOC(immediate-or-cancel) 
-> if not filed , then cancell it
-> partial fills  are not allowed . 
-> minimise disruption to stock price
-> note- > in this in that particula time fo frame , the number of qunatties place or purchased are done , and if some rest remain they be get cancelled and
->  transcarion about tbat placed only and rest get cancelled
-> here it is like : " DO it now or never " 
->  Exmaple -> if set FOK like to buy 1000 shares of ABC and on mornig it fiund to be at 800 shares then it will not do  and get cancelled. 
-> input : quantity , price

-> AON (all-or-none) order :
->  contigetn mean -> require another event to execute it 
->  specfiies the size of the order , must be filled  m and that partial fills will not be accepted.
-> fill order completely or not 
-> same like FOK
-> differnce in Investor give the time frame in this approach like if in tnis time frame you are not able to get the exact shares then cancel it 
-> same no partial filled allowed 
-> it be see for that time frame if it get that deal it be hold that otherwise after time frame it be get canceeld
-> whereas in FOK its like NOW or never
-> it remains in active so what 
-> inputs : time, quantity , price

-> IOC order :
-> it basically allows partial filled 
-> buy or sell a security that attempts to execute all or part immedietely and then cancels any unfilled potion of the order 
-> it is genereally placed manually or porgammed into automated trading strategies 
-> require a prtial fill 
-> use this orders when market are volatile to try to fill as much as possible at current market prices
-> of type type 
-> limit IOC : 
->  where enters  a sepcific price.
-> IOC market order : 
-> no price attached and transcats with best offer for buy and best bid price for sell
-> limit risk , speed execution, and prie improvement
-> enterd at t specific price , 
-> input : quantity , price


-> shaloworder book -> could indicate lower market liquidity , whcih can lead to more price volatility as even small trades cam affect them.
-> deeper orderbook -> oprovide more liqiudity m resulting in tighter bid-ask spread
-> Market liquidity -> refers to extent to which a market , such as a country stock market or a city's real estate market , allows assets to be bought and sold at stable , transparent prices. 

WOrkig of ann order book : 

Matching order book : 
-> it's like a seesaw  , it attempts to maintain equilibrium between buyers and sellers.
-> A market sell order is matched with the highest avialable buy order or the "best-bid",and a market buy order is met with the lowest avialable  sell order or the "best ask".

Example : 
 let’s assume a trader places a market order to sell 100 shares of Company A. The order book algorithm scans the book for the highest buy order that can fulfill this request. Suppose the best bid at that moment is for 50 shares at $50 each. The algorithm will execute this part of the sell order at $50 per share. If the next best bid is for 75 shares at $49, the algorithm will sell the remaining 50 shares at $49 per share. This dynamic process ensures that market orders are filled at the best possible price at any given time.

bid -> highest price a buyer will pay to buy a specified numbe of shares of a stock at any given time
ask -> referst ot the lowest price at which a seller will send the stock . 
the bid price will almost always be lower thant he ask or offer price

Depth and Spread - two sides of the same coin

In Market each person has their own price at wihch they are willing to buy or sell apples . 

Depth ->
     refres to the total volume of buy and sell orders at various price in the order book . oragnaised by price . 
    this will tell you how manu apples are willing to boy or sell at each price level . 
    If lot people are there to sell and  buy at various price , we say the market has significant depth.


Spread : 
    This is the difference between the highest and lowest price that someone is willing to pay for stock (the highest bid )and the lowest price that someone is willing to sell the stock(lowest ask) . 

    If the gap is between the highest bid and lower ask price

        1. Narrow : 
            means there is not much difference and there are significant buy and sell orderes at thesse prices . 
            This sugeest highly liquid market.
            Means there are many buyers and sells making it easy to trade apples quickly and at a fair price .
            Here ther is the stability 
            not a volatile .   
            changes are less .
            less margins.
            competititve price .
            higher liquidity, Less volatility

        2. Wide : 
            means the difference is too much , then  there are few buy and sell orders at these prices 
            This suggest a less liquid market.
            Means it might be harder to find a buyer or seller quickly , but Have to pay more or accept less for your money.
            Here volatility is more .
            Changes are more . 
            more margins. 
            Lower liquidity , Greater Volaitlity


Price-Time Priority Rule  :
    A cardinal rule guiding the operation of order books is the price-Time Priority rule .
    This means that the roder with thte highest bid (buyers) or the lowest ask (for sellers) get filled first . 

    If two orders have same price , then time priority be noted down and plays role .

    Understanding Bid and Ask Values : 
    When there is a high volume or orders at the best bid or ask prices , it suggest that there's significant interest from buyers or sellers at those specific price points , which may prevent the price from falling further.

    Resistance And Support : 

    High volumes at best ask price can act as a  temporary resistance level , indicating singificant selling interest that may prevent the price from falling further . 

    if price were to decrease three is a good chance that buyers would step in and purchase shares , preventing the price from falling further . 
    number of sellers not very much .

    -> High volumes make the effect of demand , and selling also not affcet that very much if in small numbers so the price not gonna fall .

    -> Buying at high values display that the sentitments also increase too much so leading to continuation of the upward pirce trend. 


    Looking for clusters :
        Clusters act as pscological levels of support or resistance , For instance a large cluster of limit buy orders could suggest that a significant number of traders believe that the asset is a good buy at that price .
        If too pirce were decline , buying at vhigh volume can reverse that . 

    Observing Price Movements : 
        Traders should closely observe how prices move thrigh different levels in the order book . 
        For instance , if price leveles are quickly eaten(low) through on sell-side , it could indicate strong buying pressure , signalling a possible uptrend . 

    Analysing the Price Gaps : 
        Gaps or larger rpice jumps in order book , can also provide crucial information. 
        A gap on sell side may mean there's less resistance to upward price moevemnt , which could be a bullish signal . (upward momentum)
        A gap on buy-side could mean lower support , suggesting potential downward momentum . 

    Examining Order Size :
        The size of individual orders can also be telling . 
        Large orders often come from institution traders and can significantly impact the price . 
        If a big order is filled , it could trigger a surge in trading volume and lead to substantial price shifts .

    Recognizing Spoofing Patterns :
        Sppofing is like trader place a large order without intention to execute it , mean artificila market movememnt . 
         cancel them before execution beofre get filled 
         createing false imoression of supply and demand . 

        Trader has to closely monitor those Large order consistently appearing and disappering , which could signla potential spoofing .

    Recognizing :
        1. Large orders appearing and disappearing -> place order far from current market price . creating an illusion .
        
        2. Order Book Imbalance -> Traders can look for instances where large buy or sell orders can consistently added and removed from order book without being executed . 

        3. Impact in short lived . 

        4. To detect spoofing patterns, traders often rely on advanced software tools and automated systems that analyze order book data in real-time. These tools can flag suspicious trading activity, such as large orders with high cancellation rates or unusual order placement behavior, allowing traders to exercise caution and avoid making decisions based on artificial market movements.










