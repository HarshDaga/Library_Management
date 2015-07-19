/*
Navicat MySQL Data Transfer

Source Server         : localhost_root
Source Server Version : 50617
Source Host           : localhost:3306
Source Database       : dept_library

Target Server Type    : MYSQL
Target Server Version : 50617
File Encoding         : 65001

Date: 2015-07-20 03:28:01
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for authors
-- ----------------------------
DROP TABLE IF EXISTS `authors`;
CREATE TABLE `authors` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=78 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of authors
-- ----------------------------
INSERT INTO `authors` VALUES ('1', 'A.K. Mehta, M.M. Bhatkar');
INSERT INTO `authors` VALUES ('2', 'Aditya Kumar Gupta');
INSERT INTO `authors` VALUES ('3', 'Amarendra N.sinha');
INSERT INTO `authors` VALUES ('4', 'Ankit Asthana');
INSERT INTO `authors` VALUES ('5', 'Anthony Velte');
INSERT INTO `authors` VALUES ('6', 'Anu Bhatia');
INSERT INTO `authors` VALUES ('7', 'Barnett');
INSERT INTO `authors` VALUES ('8', 'Brijendra Kumar Joshi');
INSERT INTO `authors` VALUES ('9', 'C.L Liu');
INSERT INTO `authors` VALUES ('10', 'D Jeya Mala, S.Geetha');
INSERT INTO `authors` VALUES ('11', 'D.M. Dhandhere');
INSERT INTO `authors` VALUES ('12', 'D.P.Nagpal');
INSERT INTO `authors` VALUES ('13', 'D.S Yadav');
INSERT INTO `authors` VALUES ('14', 'Dane Chaffey');
INSERT INTO `authors` VALUES ('15', 'Deven N.Shah, Dilip Motwani');
INSERT INTO `authors` VALUES ('16', 'Dilip kumar Sultania');
INSERT INTO `authors` VALUES ('17', 'Dr. O. G. Kakde');
INSERT INTO `authors` VALUES ('18', 'Dr. S. S. Khandare');
INSERT INTO `authors` VALUES ('19', 'Drishti Bhatia');
INSERT INTO `authors` VALUES ('20', 'E. Balaguruswamy');
INSERT INTO `authors` VALUES ('21', 'Er.Rajiv Chopra');
INSERT INTO `authors` VALUES ('22', 'Gerti Kapell, Birgit Proll');
INSERT INTO `authors` VALUES ('23', 'Harish Narula');
INSERT INTO `authors` VALUES ('24', 'ITL Education');
INSERT INTO `authors` VALUES ('25', 'J.S. Chitode');
INSERT INTO `authors` VALUES ('26', 'Jeffrey D. Ullman');
INSERT INTO `authors` VALUES ('27', 'Jeffrey whitter');
INSERT INTO `authors` VALUES ('28', 'Jibitesh Mishra, Ashok Moharty');
INSERT INTO `authors` VALUES ('29', 'Joan Casteel');
INSERT INTO `authors` VALUES ('30', 'John Deacon');
INSERT INTO `authors` VALUES ('31', 'John F. Koegel Buford');
INSERT INTO `authors` VALUES ('32', 'K.Muneeswaran');
INSERT INTO `authors` VALUES ('33', 'Keval Veera');
INSERT INTO `authors` VALUES ('34', 'Kunal Pimparkhede');
INSERT INTO `authors` VALUES ('35', 'Leland L.Beck');
INSERT INTO `authors` VALUES ('36', 'M. R. Bhujade');
INSERT INTO `authors` VALUES ('37', 'M.P Bhave, S.A Patekar');
INSERT INTO `authors` VALUES ('38', 'Mahesh Mali');
INSERT INTO `authors` VALUES ('39', 'Mark L. Gillenron');
INSERT INTO `authors` VALUES ('40', 'McGraw Hill Publication');
INSERT INTO `authors` VALUES ('41', 'Michael J. A. Berry');
INSERT INTO `authors` VALUES ('42', 'Michael Kiter, Austha B.');
INSERT INTO `authors` VALUES ('43', 'Micheal T.Goodrich');
INSERT INTO `authors` VALUES ('44', 'Mrs. Pallavi Kulkarni');
INSERT INTO `authors` VALUES ('45', 'Ms.Snehal Suryavanshi');
INSERT INTO `authors` VALUES ('46', 'Muneeswaram');
INSERT INTO `authors` VALUES ('47', 'Narayan .S. Umanath');
INSERT INTO `authors` VALUES ('48', 'Naresh Chauhan');
INSERT INTO `authors` VALUES ('49', 'Navin Israni');
INSERT INTO `authors` VALUES ('50', 'P.B Mahapatra');
INSERT INTO `authors` VALUES ('51', 'Pimparkhede Kunal');
INSERT INTO `authors` VALUES ('52', 'Pradip Dey, Manas Ghosh');
INSERT INTO `authors` VALUES ('53', 'Raj Kamal');
INSERT INTO `authors` VALUES ('54', 'Ralph Kimball');
INSERT INTO `authors` VALUES ('55', 'Reema Thareja');
INSERT INTO `authors` VALUES ('56', 'RP Jain');
INSERT INTO `authors` VALUES ('57', 'S.k Singh');
INSERT INTO `authors` VALUES ('58', 'S.P.Eugene Xavier');
INSERT INTO `authors` VALUES ('59', 'Sachin Malhotra');
INSERT INTO `authors` VALUES ('60', 'Sagar Nagda, Abhishek Baliya');
INSERT INTO `authors` VALUES ('61', 'Saiqa Mohammed Shaikh');
INSERT INTO `authors` VALUES ('62', 'Sanjesh S.Pawale');
INSERT INTO `authors` VALUES ('63', 'Sanket Panket Panarkar');
INSERT INTO `authors` VALUES ('64', 'Shweta A. Loonkar');
INSERT INTO `authors` VALUES ('65', 'Srimanta Pal');
INSERT INTO `authors` VALUES ('66', 'Sunita Mahajan');
INSERT INTO `authors` VALUES ('67', 'Sunita Mahajan, Seema Shah');
INSERT INTO `authors` VALUES ('68', 'Surati Jain');
INSERT INTO `authors` VALUES ('69', 'T. N. Chhabra');
INSERT INTO `authors` VALUES ('70', 'Tata McGraw Hill Publication');
INSERT INTO `authors` VALUES ('71', 'Tulshiam Sule');
INSERT INTO `authors` VALUES ('72', 'V.Raghavan');
INSERT INTO `authors` VALUES ('73', 'V.S. Bagad, I.A. Dhotre');
INSERT INTO `authors` VALUES ('74', 'Vinaya M. Rawool');
INSERT INTO `authors` VALUES ('75', 'Vivek Kulkarni');
INSERT INTO `authors` VALUES ('76', 'William Stallings');
INSERT INTO `authors` VALUES ('77', 'Zhigng Xiang');

-- ----------------------------
-- Table structure for books
-- ----------------------------
DROP TABLE IF EXISTS `books`;
CREATE TABLE `books` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=62 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of books
-- ----------------------------
INSERT INTO `books` VALUES ('1', 'A First Course in Database System');
INSERT INTO `books` VALUES ('2', 'C++(For Beginners..Masters)');
INSERT INTO `books` VALUES ('3', 'Cloud Computing');
INSERT INTO `books` VALUES ('4', 'Compiler Design');
INSERT INTO `books` VALUES ('5', 'Computer Graphics');
INSERT INTO `books` VALUES ('6', 'Computer Graphics & Virtual Reality');
INSERT INTO `books` VALUES ('7', 'Computer Network');
INSERT INTO `books` VALUES ('8', 'Computer Organisation & Architechture');
INSERT INTO `books` VALUES ('9', 'Computer Programming - I');
INSERT INTO `books` VALUES ('10', 'Data Communication & Computer Networks');
INSERT INTO `books` VALUES ('11', 'Data Mining Techniques');
INSERT INTO `books` VALUES ('12', 'Data Modelling and Database Design');
INSERT INTO `books` VALUES ('13', 'Data structure algorithm in JAVA');
INSERT INTO `books` VALUES ('14', 'Data structure using C');
INSERT INTO `books` VALUES ('15', 'Data Structures & Algorithm in C++');
INSERT INTO `books` VALUES ('16', 'Data Warehousing & Data Mining');
INSERT INTO `books` VALUES ('17', 'Database Management & Oracle Programming');
INSERT INTO `books` VALUES ('18', 'Database Management System');
INSERT INTO `books` VALUES ('19', 'Database System');
INSERT INTO `books` VALUES ('20', 'Distributed Computing');
INSERT INTO `books` VALUES ('21', 'E-Business & E-Commerce Management');
INSERT INTO `books` VALUES ('22', 'E-commerce');
INSERT INTO `books` VALUES ('23', 'Elements Of Discrete Mathematics');
INSERT INTO `books` VALUES ('24', 'Embedded C Programming & the Atmel AVR');
INSERT INTO `books` VALUES ('25', 'Foundations of Information Technology');
INSERT INTO `books` VALUES ('26', 'Introduction to Database Management');
INSERT INTO `books` VALUES ('27', 'Management Information System');
INSERT INTO `books` VALUES ('28', 'Microprocessor');
INSERT INTO `books` VALUES ('29', 'Mobile Computing');
INSERT INTO `books` VALUES ('30', 'Modern Digital Electronics');
INSERT INTO `books` VALUES ('31', 'Multimedia System');
INSERT INTO `books` VALUES ('32', 'Numerical Techniques');
INSERT INTO `books` VALUES ('33', 'Object oriented analysis and design');
INSERT INTO `books` VALUES ('34', 'Object Oriented Analysis and design using UML');
INSERT INTO `books` VALUES ('35', 'Object Oriented Programming C++');
INSERT INTO `books` VALUES ('36', 'Operating Systems');
INSERT INTO `books` VALUES ('37', 'Oracle 10g SQL');
INSERT INTO `books` VALUES ('38', 'Parallel Computing');
INSERT INTO `books` VALUES ('39', 'Principles of complier design');
INSERT INTO `books` VALUES ('40', 'Programming in ANSI');
INSERT INTO `books` VALUES ('41', 'Programming in ANSI C');
INSERT INTO `books` VALUES ('42', 'Programming in C ');
INSERT INTO `books` VALUES ('43', 'Programming in C#');
INSERT INTO `books` VALUES ('44', 'Programming in C++');
INSERT INTO `books` VALUES ('45', 'Programming in Java');
INSERT INTO `books` VALUES ('46', 'Software engineering');
INSERT INTO `books` VALUES ('47', 'Structured and object oriented analysis and design');
INSERT INTO `books` VALUES ('48', 'Structured Programming Approach');
INSERT INTO `books` VALUES ('49', 'System analysis and design methods methods');
INSERT INTO `books` VALUES ('50', 'System Programming');
INSERT INTO `books` VALUES ('51', 'System Programming & Compiler Construction');
INSERT INTO `books` VALUES ('52', 'System Software');
INSERT INTO `books` VALUES ('53', 'Taxonomy of Database Management System');
INSERT INTO `books` VALUES ('54', 'The Datawarehouse Toolkit');
INSERT INTO `books` VALUES ('55', 'Theoritical Computer Science');
INSERT INTO `books` VALUES ('56', 'Theory Of Automata,Formal Languages & Computation');
INSERT INTO `books` VALUES ('57', 'Theory Of Computation');
INSERT INTO `books` VALUES ('58', 'Theory Of Computer Science');
INSERT INTO `books` VALUES ('59', 'Web Design Technology');
INSERT INTO `books` VALUES ('60', 'Web Engineering');
INSERT INTO `books` VALUES ('61', 'Web Technology');

-- ----------------------------
-- Table structure for categories
-- ----------------------------
DROP TABLE IF EXISTS `categories`;
CREATE TABLE `categories` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of categories
-- ----------------------------
INSERT INTO `categories` VALUES ('1', 'Unknown');

-- ----------------------------
-- Table structure for issue_history
-- ----------------------------
DROP TABLE IF EXISTS `issue_history`;
CREATE TABLE `issue_history` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `lib_id` int(11) unsigned NOT NULL,
  `student_id` varchar(32) DEFAULT NULL,
  `staff_id` int(11) unsigned DEFAULT NULL,
  `issue_date` datetime NOT NULL,
  `return_date` datetime DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `library_id_idx` (`lib_id`) USING BTREE,
  KEY `student_id_idx` (`student_id`) USING BTREE,
  KEY `issue_date_idx` (`issue_date`) USING BTREE,
  KEY `staff_id_fk` (`staff_id`),
  CONSTRAINT `library_id_fk` FOREIGN KEY (`lib_id`) REFERENCES `library` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `staff_id_fk` FOREIGN KEY (`staff_id`) REFERENCES `staff` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `student_id_fk` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of issue_history
-- ----------------------------

-- ----------------------------
-- Table structure for library
-- ----------------------------
DROP TABLE IF EXISTS `library`;
CREATE TABLE `library` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `book_id` int(11) unsigned NOT NULL,
  `author_id` int(11) unsigned NOT NULL,
  `owner_id` int(11) unsigned NOT NULL,
  `category_id` int(11) unsigned NOT NULL DEFAULT '1',
  `available` bit(1) NOT NULL DEFAULT b'1',
  PRIMARY KEY (`id`),
  KEY `book_id_idx` (`book_id`) USING BTREE,
  KEY `owner_id_idx` (`owner_id`) USING BTREE,
  KEY `author_id_fk` (`author_id`),
  KEY `category_id_fk` (`category_id`),
  CONSTRAINT `author_id_fk` FOREIGN KEY (`author_id`) REFERENCES `authors` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `book_id_fk` FOREIGN KEY (`book_id`) REFERENCES `books` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `category_id_fk` FOREIGN KEY (`category_id`) REFERENCES `categories` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `owner_id_fk` FOREIGN KEY (`owner_id`) REFERENCES `staff` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=103 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of library
-- ----------------------------
INSERT INTO `library` VALUES ('1', '1', '26', '7', '1', '');
INSERT INTO `library` VALUES ('2', '2', '4', '7', '1', '');
INSERT INTO `library` VALUES ('3', '3', '5', '5', '1', '');
INSERT INTO `library` VALUES ('4', '4', '17', '8', '1', '');
INSERT INTO `library` VALUES ('5', '4', '17', '8', '1', '');
INSERT INTO `library` VALUES ('6', '4', '46', '8', '1', '');
INSERT INTO `library` VALUES ('7', '4', '32', '4', '1', '');
INSERT INTO `library` VALUES ('8', '4', '32', '6', '1', '');
INSERT INTO `library` VALUES ('9', '5', '21', '3', '1', '');
INSERT INTO `library` VALUES ('10', '5', '62', '7', '1', '');
INSERT INTO `library` VALUES ('11', '5', '77', '7', '1', '');
INSERT INTO `library` VALUES ('12', '5', '3', '7', '1', '');
INSERT INTO `library` VALUES ('13', '5', '70', '7', '1', '');
INSERT INTO `library` VALUES ('14', '6', '62', '7', '1', '');
INSERT INTO `library` VALUES ('15', '7', '73', '7', '1', '');
INSERT INTO `library` VALUES ('16', '8', '76', '11', '1', '');
INSERT INTO `library` VALUES ('17', '9', '37', '1', '1', '');
INSERT INTO `library` VALUES ('18', '9', '51', '1', '1', '');
INSERT INTO `library` VALUES ('19', '9', '6', '1', '1', '');
INSERT INTO `library` VALUES ('20', '9', '34', '7', '1', '');
INSERT INTO `library` VALUES ('21', '9', '74', '7', '1', '');
INSERT INTO `library` VALUES ('22', '9', '37', '7', '1', '');
INSERT INTO `library` VALUES ('23', '10', '40', '7', '1', '');
INSERT INTO `library` VALUES ('24', '11', '41', '7', '1', '');
INSERT INTO `library` VALUES ('25', '12', '47', '7', '1', '');
INSERT INTO `library` VALUES ('26', '13', '43', '1', '1', '');
INSERT INTO `library` VALUES ('27', '14', '55', '1', '1', '');
INSERT INTO `library` VALUES ('28', '14', '55', '1', '1', '');
INSERT INTO `library` VALUES ('29', '15', '8', '9', '1', '');
INSERT INTO `library` VALUES ('30', '16', '24', '3', '1', '');
INSERT INTO `library` VALUES ('31', '17', '18', '7', '1', '');
INSERT INTO `library` VALUES ('32', '18', '38', '3', '1', '');
INSERT INTO `library` VALUES ('33', '18', '33', '7', '1', '');
INSERT INTO `library` VALUES ('34', '18', '38', '7', '1', '');
INSERT INTO `library` VALUES ('35', '18', '38', '7', '1', '');
INSERT INTO `library` VALUES ('36', '18', '61', '7', '1', '');
INSERT INTO `library` VALUES ('37', '18', '44', '8', '1', '');
INSERT INTO `library` VALUES ('38', '19', '42', '7', '1', '');
INSERT INTO `library` VALUES ('39', '19', '57', '7', '1', '');
INSERT INTO `library` VALUES ('40', '20', '67', '2', '1', '');
INSERT INTO `library` VALUES ('41', '20', '66', '9', '1', '');
INSERT INTO `library` VALUES ('42', '21', '14', '9', '1', '');
INSERT INTO `library` VALUES ('43', '22', '69', '7', '1', '');
INSERT INTO `library` VALUES ('44', '23', '9', '7', '1', '');
INSERT INTO `library` VALUES ('45', '24', '7', '7', '1', '');
INSERT INTO `library` VALUES ('46', '25', '13', '3', '1', '');
INSERT INTO `library` VALUES ('47', '26', '39', '7', '1', '');
INSERT INTO `library` VALUES ('48', '27', '1', '7', '1', '');
INSERT INTO `library` VALUES ('49', '28', '23', '2', '1', '');
INSERT INTO `library` VALUES ('50', '29', '53', '5', '1', '');
INSERT INTO `library` VALUES ('51', '30', '56', '3', '1', '');
INSERT INTO `library` VALUES ('52', '31', '31', '7', '1', '');
INSERT INTO `library` VALUES ('53', '32', '25', '7', '1', '');
INSERT INTO `library` VALUES ('54', '33', '30', '3', '1', '');
INSERT INTO `library` VALUES ('55', '34', '10', '3', '1', '');
INSERT INTO `library` VALUES ('56', '34', '10', '5', '1', '');
INSERT INTO `library` VALUES ('57', '35', '20', '7', '1', '');
INSERT INTO `library` VALUES ('58', '35', '20', '1', '1', '');
INSERT INTO `library` VALUES ('59', '36', '48', '2', '1', '');
INSERT INTO `library` VALUES ('60', '37', '29', '7', '1', '');
INSERT INTO `library` VALUES ('61', '38', '36', '7', '1', '');
INSERT INTO `library` VALUES ('62', '39', '72', '4', '1', '');
INSERT INTO `library` VALUES ('63', '39', '72', '6', '1', '');
INSERT INTO `library` VALUES ('64', '40', '20', '7', '1', '');
INSERT INTO `library` VALUES ('65', '41', '20', '1', '1', '');
INSERT INTO `library` VALUES ('66', '41', '20', '1', '1', '');
INSERT INTO `library` VALUES ('67', '42', '55', '1', '1', '');
INSERT INTO `library` VALUES ('68', '42', '52', '1', '1', '');
INSERT INTO `library` VALUES ('69', '43', '20', '9', '1', '');
INSERT INTO `library` VALUES ('70', '44', '50', '3', '1', '');
INSERT INTO `library` VALUES ('71', '45', '59', '1', '1', '');
INSERT INTO `library` VALUES ('72', '45', '59', '1', '1', '');
INSERT INTO `library` VALUES ('73', '46', '28', '3', '1', '');
INSERT INTO `library` VALUES ('74', '46', '28', '3', '1', '');
INSERT INTO `library` VALUES ('75', '46', '15', '3', '1', '');
INSERT INTO `library` VALUES ('76', '47', '71', '5', '1', '');
INSERT INTO `library` VALUES ('77', '48', '63', '10', '1', '');
INSERT INTO `library` VALUES ('78', '49', '27', '5', '1', '');
INSERT INTO `library` VALUES ('79', '50', '65', '4', '1', '');
INSERT INTO `library` VALUES ('80', '50', '11', '4', '1', '');
INSERT INTO `library` VALUES ('81', '50', '65', '6', '1', '');
INSERT INTO `library` VALUES ('82', '50', '68', '8', '1', '');
INSERT INTO `library` VALUES ('83', '51', '49', '8', '1', '');
INSERT INTO `library` VALUES ('84', '51', '64', '8', '1', '');
INSERT INTO `library` VALUES ('85', '52', '35', '7', '1', '');
INSERT INTO `library` VALUES ('86', '53', '2', '8', '1', '');
INSERT INTO `library` VALUES ('87', '54', '54', '7', '1', '');
INSERT INTO `library` VALUES ('88', '55', '16', '8', '1', '');
INSERT INTO `library` VALUES ('89', '56', '58', '8', '1', '');
INSERT INTO `library` VALUES ('90', '57', '75', '4', '1', '');
INSERT INTO `library` VALUES ('91', '57', '17', '8', '1', '');
INSERT INTO `library` VALUES ('92', '57', '75', '8', '1', '');
INSERT INTO `library` VALUES ('93', '57', '17', '8', '1', '');
INSERT INTO `library` VALUES ('94', '58', '16', '4', '1', '');
INSERT INTO `library` VALUES ('95', '58', '19', '6', '1', '');
INSERT INTO `library` VALUES ('96', '58', '19', '8', '1', '');
INSERT INTO `library` VALUES ('97', '58', '75', '8', '1', '');
INSERT INTO `library` VALUES ('98', '59', '12', '7', '1', '');
INSERT INTO `library` VALUES ('99', '60', '45', '3', '1', '');
INSERT INTO `library` VALUES ('100', '60', '22', '3', '1', '');
INSERT INTO `library` VALUES ('101', '60', '45', '3', '1', '');
INSERT INTO `library` VALUES ('102', '61', '60', '3', '1', '');

-- ----------------------------
-- Table structure for staff
-- ----------------------------
DROP TABLE IF EXISTS `staff`;
CREATE TABLE `staff` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=12 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of staff
-- ----------------------------
INSERT INTO `staff` VALUES ('1', 'Rugved Deolekar');
INSERT INTO `staff` VALUES ('2', 'Prita Patil');
INSERT INTO `staff` VALUES ('3', 'Kavita Shirsat');
INSERT INTO `staff` VALUES ('4', 'Amit Dhanwani');
INSERT INTO `staff` VALUES ('5', 'Sneha Annappanavar');
INSERT INTO `staff` VALUES ('6', 'Suja Jayachandran');
INSERT INTO `staff` VALUES ('7', 'Sachin Deshpande');
INSERT INTO `staff` VALUES ('8', 'Pankaj Vanvari');
INSERT INTO `staff` VALUES ('9', 'Swapnil Sonawane');
INSERT INTO `staff` VALUES ('10', 'Mandar Soni');
INSERT INTO `staff` VALUES ('11', 'Amit Nerurkar');

-- ----------------------------
-- Table structure for students
-- ----------------------------
DROP TABLE IF EXISTS `students`;
CREATE TABLE `students` (
  `id` varchar(32) NOT NULL COMMENT 'Student Roll no.',
  `name` varchar(255) NOT NULL COMMENT 'Student Name',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of students
-- ----------------------------
INSERT INTO `students` VALUES ('13102A0001', 'Ajinkya Gawali');
INSERT INTO `students` VALUES ('13106B0030', 'Aravind Damisetti');
INSERT INTO `students` VALUES ('13106B0033', 'Harsh Daga');

-- ----------------------------
-- View structure for view_issue_history
-- ----------------------------
DROP VIEW IF EXISTS `view_issue_history`;
CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER  VIEW `view_issue_history` AS SELECT
	issue_history.id AS ID,
	books.`name` AS Book,
	`authors`.`name` AS Author,
	staff.`name` AS `Owner`,
	students.`name` AS Student,
	staff_issue.`name` AS Staff,
	issue_history.issue_date AS Issue_Date,
	issue_history.return_date AS Return_Date
FROM
	issue_history
INNER JOIN library ON issue_history.lib_id = library.id
INNER JOIN books ON library.book_id = books.id
INNER JOIN `authors` ON library.author_id = `authors`.id
INNER JOIN staff ON issue_history.lib_id = library.id
AND library.owner_id = staff.id
LEFT JOIN students ON issue_history.student_id = students.id
LEFT JOIN staff AS staff_issue ON issue_history.staff_id = staff_issue.id
ORDER BY
Issue_Date DESC ;

-- ----------------------------
-- View structure for view_library
-- ----------------------------
DROP VIEW IF EXISTS `view_library`;
CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost` SQL SECURITY DEFINER  VIEW `view_library` AS SELECT
	library.id AS ID,
	books.`name` AS Book,
	`authors`.`name` AS Author,
	categories.`name` AS Category,
	staff.`name` AS `Owner`,
	library.available AS Available
FROM
	library
INNER JOIN staff ON library.owner_id = staff.id
INNER JOIN books ON library.book_id = books.id
INNER JOIN categories ON library.category_id = categories.id
INNER JOIN `authors` ON library.author_id = `authors`.id
ORDER BY
	ID ASC ; ;
DROP TRIGGER IF EXISTS `Book_Issued`;
DELIMITER ;;
CREATE TRIGGER `Book_Issued` AFTER INSERT ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 0
WHERE library.id = new.lib_id
;
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `Book_Returned`;
DELIMITER ;;
CREATE TRIGGER `Book_Returned` AFTER UPDATE ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 1
WHERE library.id = new.lib_id
;
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `Row_Deleted`;
DELIMITER ;;
CREATE TRIGGER `Row_Deleted` AFTER DELETE ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 1
WHERE library.id = old.lib_id
;;
DELIMITER ;
