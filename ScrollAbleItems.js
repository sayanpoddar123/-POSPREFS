import React from 'react'
import { ScrollView, StyleSheet, Text, View} from "react-native";
export default function ScrollAbleItems() {
    var data = [
        { name: "Ben", id: 1 },
        { name: "Susan", id: 2 },
        { name: "Robert", id: 3 },
        { name: "Mary", id: 4 },
        { name: "Daniel", id: 5 },
        { name: "Laura", id: 6 },
        { name: "John", id: 7 },
        { name: "Debra", id: 8 },
        { name: "Aron", id: 9 },
        { name: "Ann", id: 10 },
        { name: "Steve", id: 11 },
        { name: "Olivia", id: 12 },
        { name: "Daniel", id: 5 },
        { name: "Laura", id: 6 },
        { name: "John", id: 7 },
        { name: "Debra", id: 8 },
        { 
    name: "Aron", id: 9 },
        { name: "Ann", id: 10 },
        { name: "Steve", id: 11 },
        { name: "Olivia", id: 12 },
      ];
    return (
        <>
        <View style={styles.container}>
        <View style={{ flex: 1, backgroundColor: "red", paddingTop: 40}}>
            <Text style={{ fontSize: 20, color: "white" }}>MY APP</Text>
        </View>
        <View style={{ flex:13}}>
            <ScrollView>
                {
                    data.map((info, index) =>(
                        <View key={index} style={styles.item}>
                            <Text>{info.name}</Text>
                        </View>
                    ))
                }
            </ScrollView>
        </View>
        </View>
        </>
    );
}
const styles= StyleSheet.create({
    container: {
        flex: 1,
    },
    item: {
        flexDirection: "row",
        justifyContent: "space-between",
        alignItems: "center",
        padding: 30,
        margin: 2,
        borderWidth: 1,
        backgroundColor: "#f1f3f4",
    },
});
