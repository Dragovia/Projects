import pandas as pd
import numpy as np
import os
import matplotlib.pyplot as plt

df = pd.read_csv('C:/Users/proce/OneDrive/Desktop/Iris/IRIS.csv')

df.head()
#print(df.head())

print(" ")

df.tail()
#print(df.tail())

df.describe()

df.info()

#to diplay number of samples on each class
df['species'].value_counts()

#checking null values
df.isnull().sum()

df['sepal_length'].hist()
#print(df['sepal_length'].hist())

df['sepal_width'].hist()

df['sepal_length'].hist()

df['petal_width'].hist()


colors = [ 'yellow','green','brown']
species =['Iris-setosa', 'Iris-versicolor','Iris-virginica']


for i in range(3):
    x=df[df['species']==species[i]]
    plt.scatter(x['sepal_length'],x['sepal_width'],c=colors[i],label=species[i])
plt.xlabel('sepal_length')
plt.ylabel('sepal_width')
plt.legend()


from sklearn.model_selection import train_test_split

X = df.drop(columns=['species'])
Y = df['species']

X_train, X_test, Y_train, Y_test = train_test_split(X,Y,test_size=0.30)

from sklearn.linear_model import LogisticRegression

model = LogisticRegression()

model.fit(X_train, Y_train)

print('Accuracy', model.score(X_test,Y_test)*100)

#using K-Nearest Neighbors
from sklearn.neighbors import KNeighborsClassifier
model = KNeighborsClassifier()

model.fit(X_train,Y_train)

print('Accuracy', model.score(X_test,Y_test)* 100)


from sklearn.tree import DecisionTreeClassifier
model = DecisionTreeClassifier()

model.fit(X_train,Y_train)

print("Accuracy", model.score(X_test,Y_test)*100)
