# Stats Final Paper
library(ggplot2)
library(rgl)

myData = read.csv("Programming/Personal/STATSFinalPaper/data.csv")
mycolors = c('royalblue1', 'darkcyan', 'oldlace')
colors = c(replicate(nrow(myData),'royalblue1')
           
colfunc = colorRampPalette(c("red", "blue"))
           
# Importing data from table
# Want to plot: Current one (x)(Xn) versus next one (y)(Xn +1)

# 2D plot example
ggplot(myData, aes(x = myData$ANSICpc, y=myData$ANSICpcPlus1)) + 
  geom_point(size = 1.1) +
  labs(title = "Scatter Plot Comparing the Output of a LCG to Its Previous Output", 
       x = "Xn",
       y = "Xn+1")

par(mar=c(0,0,0,0))
# 3D plot example
plot3d( 
  x=myData$ANSIC10k, y=myData$ANSIC10kPlus1, z=myData$ANSIC10kPlus2, 
  col = colfunc(nrow(myData)),
  type = 's', 
  radius = 10000000,
  xlab="Base", ylab="Xn + 1", zlab="Xn + 2")

#writeWebGL( filename="HtmlWidget/3dscatter.html" ,  width=600, height=600)

ggplot(myData, aes(x = myData$ANSIC10k, y=myData$ANSIC10kPlus1)) + 
  geom_point(size = 0.7, col = colfunc(nrow(myData))) +
  labs(title = "Scatter Plot Comparing the Output of 10k ANSI C to its Previous Output", 
       x = "Xn",
       y = "Xn+1")


ggplot(myData, aes(x = myData$badLCG1k, y=myData$badLCG1kPlus1)) + 
  geom_point(size = 2, col = colfunc(14287)) +
  labs(title = "Scatter Plot Comparing the Output of 10k ANSI C to its Previous Output", 
       x = "Xn",
       y = "Xn+1")
