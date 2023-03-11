import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

void main() {
  runApp(const MainApp());
}

class MainApp extends StatelessWidget {
  const MainApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Person Profile'),
        ),
        body: Column(
          children: [
            Expanded(
              child: PageView(
                children: [
                  const Avatar(name: 'Karen Alexandre'),
                  Container(
                    color: Colors.purple,
                  ),
                  Container(
                    color: Colors.blue,
                  ),
                ],
              ),
            ),
          ],
        ),
        floatingActionButton: FloatingActionButton(
          child: const Icon(FontAwesomeIcons.linkedinIn),
          onPressed: () {},
        ),
      ),
    );
  }
}


class Avatar extends StatelessWidget {
  const Avatar({required this.name, super.key});

  final String name;

  @override
  Widget build(BuildContext context) {
    const titleTextStyle = TextStyle(fontSize: 30, fontWeight: FontWeight.bold);

    return Align(
      alignment: Alignment.center,
      child: Column(
        children: [
          Container(
            margin: const EdgeInsets.only(top: 40),
            child: CircleAvatar(
              radius: 100,
              child: Text(
                name,
                style: titleTextStyle,
              ),
            ),
          ),
          Container(
            margin: const EdgeInsets.only(top: 20),
            child: Text(
              name,
              style: titleTextStyle,
            ),
          ),
        ],
      ),
    );
  }
}