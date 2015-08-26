# Depart Library Management System

DLMS ![DLMS Icon](Library_Management/Library Mgmt/$this.Icon.ico) is a cloud-enabled, offline-storage Library Management Application.

  - Records stored in a MySql Database
  - 3NF DataBase
  - Prevent users from accidentally corrupting the database

## Requirements

1. Install [Visual C++ Redistributable x86](http://download.microsoft.com/download/2/E/6/2E61CFA4-993B-4DD4-91DA-3737CD5CD6E3/vcredist_x86.exe)
2. Install [Microsoft .NET Framework 3.5](http://www.microsoft.com/en-us/download/details.aspx?id=21)
3. Install [Microsoft .NET Framework 4](http://www.microsoft.com/en-us/download/details.aspx?id=17718)
4. Install [MySQL](http://downloads.mysql.com/archives/installer/)
5. **OPTIONAL** Install [Microsoft .NET Framework 4.5.2](https://www.microsoft.com/en-us/download/details.aspx?id=42642) for future updates

## Usage

1. Set-up MySQL. [Need help?](https://www.drupal.org/node/266)
2. Execute _[dept_library.sql](dept_library.sql)_
2. Edit _[connection.ini](Library Mgmt/connection.ini)_ accordingly
3. Launch _DLMS.exe_ with _[connection.ini](Library Mgmt/connection.ini)_ in the same directory


## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request :D


## History

1.0.0.9
- change request queue mechanism
- downgrade to vc++2013 and .NET v4.0

1.0.0.8
- add book request queue
- highlight overdue books
- quick return books from IssueHistory window

1.0.0.4
- initial release
