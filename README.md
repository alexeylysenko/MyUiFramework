
MyUiFramework
===============

QML is a declarative language that is part of Qt framework and it enables building fluid and performant user interfaces.
If there is a series of similar products that tends to be created in the same style and with similar functionality the question of unification will definitely pop up sooner or later.

In QML world there are 2 options how to achieve that:

1) QQuickStyle - works just fine if you want to reuse built-on controls and just change their appearance.

2) Controls library that supports styling of its components.

**MyUiFramework** is an example how the second approach might be implemented.

## Why do I need a UI Framework for my projects?

1) Well, the first reason was already provided - the same style for all applications within your portfolio.

2) That improves your time to market - you already have a set of working and hopefully tested components that can be easily reused.

3) Individuality - You won't look like everyone else, be unique among the others, but consitent within your own projects. Recognizable style is a trait of professionalism.

4) Your controls serve your needs - if you need a special functionality of a standard control just implement that and add to your library.

5) It changes all - You don't have to wait for changes in your framework, just implement the changes that you want to and any time your projects are ready to the changes.

So, if you decided to go with a company-wide UI framework, but don't know how to start? Tale a look at this small but fully functional example.

## Dependencies

| Name         | Version                          |
|--------------|----------------------------------|
| Qt           | >= 5.15.0                        |
| C++ compiler | supporting C++17 (i.e. gcc 5+)   |
| cmake        | >= 3.14                          |

## Usage

There are a library itself in `src/` folder and demo application how to use the library in `demo/` folder.

## Contact

Questions and suggestions can be sent to email: lysenkoalexmail@gmail.com

## Contributing

Please report any suggestions, feature requests, bug reports, or annoyances to
the Github [issue tracker][issue_tracker]. 

## License

MyUiFramework is licensed under [MIT](LICENSE).


[issue_tracker]: https://github.com/alexeylysenko/MyUiFramework/issues

