/*
Navicat MySQL Data Transfer

Source Server         : localhost_root
Source Server Version : 50617
Source Host           : localhost:3306
Source Database       : dept_library

Target Server Type    : MYSQL
Target Server Version : 50617
File Encoding         : 65001

Date: 2015-08-25 06:57:48
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
) ENGINE=InnoDB AUTO_INCREMENT=89 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of authors
-- ----------------------------
INSERT INTO `authors` VALUES ('1', 'A.K. Mehta, M.M. Bhatkar');
INSERT INTO `authors` VALUES ('2', 'Aditya Kumar Gupta');
INSERT INTO `authors` VALUES ('3', 'Amarendra N. Sinha');
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
INSERT INTO `authors` VALUES ('78', 'Daniel Tabak');
INSERT INTO `authors` VALUES ('79', 'Dr.P.B.Mahapatra');
INSERT INTO `authors` VALUES ('80', 'SSI Press');
INSERT INTO `authors` VALUES ('81', 'Dr. U.S. Pandey');
INSERT INTO `authors` VALUES ('82', 'Jesse Liberty');
INSERT INTO `authors` VALUES ('83', 'Bhushan Trivedi');
INSERT INTO `authors` VALUES ('84', 'Joseph Philips');
INSERT INTO `authors` VALUES ('85', 'Vikram Pudi, P. Radha Krishna');
INSERT INTO `authors` VALUES ('86', 'Sachin Deshpande');
INSERT INTO `authors` VALUES ('87', 'Gary P. Schneider');
INSERT INTO `authors` VALUES ('88', 'B.K.Sharma, R.S. Sirohi');

-- ----------------------------
-- Table structure for books
-- ----------------------------
DROP TABLE IF EXISTS `books`;
CREATE TABLE `books` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=71 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of books
-- ----------------------------
INSERT INTO `books` VALUES ('1', 'A First Course in Database System');
INSERT INTO `books` VALUES ('2', 'C++(For Beginners..Masters)');
INSERT INTO `books` VALUES ('3', 'Cloud Computing');
INSERT INTO `books` VALUES ('4', 'Compiler Design');
INSERT INTO `books` VALUES ('5', 'Computer Graphics');
INSERT INTO `books` VALUES ('6', 'Computer Graphics &Virtual Reality');
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
INSERT INTO `books` VALUES ('39', 'Principles of compiler design');
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
INSERT INTO `books` VALUES ('62', 'Advanced Microprocessors');
INSERT INTO `books` VALUES ('63', 'Java Server Pages');
INSERT INTO `books` VALUES ('64', 'Teach Yourself C++');
INSERT INTO `books` VALUES ('65', 'IT Project Management');
INSERT INTO `books` VALUES ('66', 'Data Mining');
INSERT INTO `books` VALUES ('67', 'Information Security');
INSERT INTO `books` VALUES ('68', 'Distributed Databases');
INSERT INTO `books` VALUES ('69', 'Programming with Java');
INSERT INTO `books` VALUES ('70', 'Computer Concepts And Programming In C');

-- ----------------------------
-- Table structure for categories
-- ----------------------------
DROP TABLE IF EXISTS `categories`;
CREATE TABLE `categories` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=23 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of categories
-- ----------------------------
INSERT INTO `categories` VALUES ('1', 'Unknown');
INSERT INTO `categories` VALUES ('2', 'Database Management Systems');
INSERT INTO `categories` VALUES ('3', 'Analysis of Algorithms');
INSERT INTO `categories` VALUES ('4', 'Data Structures');
INSERT INTO `categories` VALUES ('5', 'Computer Graphics');
INSERT INTO `categories` VALUES ('6', 'Theory of Computation');
INSERT INTO `categories` VALUES ('7', 'Computer Network');
INSERT INTO `categories` VALUES ('8', 'Computer Organization and Architecture');
INSERT INTO `categories` VALUES ('9', 'Data Mining');
INSERT INTO `categories` VALUES ('10', 'Discrete Mathematics');
INSERT INTO `categories` VALUES ('11', 'Microprocessor');
INSERT INTO `categories` VALUES ('12', 'Object Oriented Programming');
INSERT INTO `categories` VALUES ('13', 'Operating Systems');
INSERT INTO `categories` VALUES ('14', 'System Programming and Compiler Construction');
INSERT INTO `categories` VALUES ('15', 'Structured Programming Approach');
INSERT INTO `categories` VALUES ('16', 'Web Technologies');
INSERT INTO `categories` VALUES ('17', 'Data Warehouse and Mining');
INSERT INTO `categories` VALUES ('18', 'E-commerce');
INSERT INTO `categories` VALUES ('19', 'Structured And Object Oriented Analysis And Design');
INSERT INTO `categories` VALUES ('20', 'Cloud Computing');
INSERT INTO `categories` VALUES ('21', 'Project Management');
INSERT INTO `categories` VALUES ('22', 'Distributed Computing');

-- ----------------------------
-- Table structure for issue_history
-- ----------------------------
DROP TABLE IF EXISTS `issue_history`;
CREATE TABLE `issue_history` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `lib_id` int(11) unsigned NOT NULL,
  `student_id` varchar(32) DEFAULT NULL,
  `issue_date` datetime NOT NULL,
  `return_date` datetime DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `library_id_idx` (`lib_id`) USING BTREE,
  KEY `student_id_idx` (`student_id`) USING BTREE,
  KEY `issue_date_idx` (`issue_date`) USING BTREE,
  CONSTRAINT `library_id_fk` FOREIGN KEY (`lib_id`) REFERENCES `library` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `student_id_fk` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB AUTO_INCREMENT=16 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of issue_history
-- ----------------------------
INSERT INTO `issue_history` VALUES ('2', '76', '13106B0053', '2015-08-12 23:47:52', '2015-08-18 23:54:05');
INSERT INTO `issue_history` VALUES ('3', '49', '13102A0044', '2015-08-12 23:49:19', '2015-08-18 23:54:56');
INSERT INTO `issue_history` VALUES ('4', '59', '13102A0046', '2015-08-12 23:51:33', '2015-08-19 00:31:41');
INSERT INTO `issue_history` VALUES ('5', '44', '13102A0035', '2015-08-12 23:53:17', null);
INSERT INTO `issue_history` VALUES ('6', '51', '14102A0055', '2015-08-13 23:39:03', null);
INSERT INTO `issue_history` VALUES ('7', '102', '13102A0064', '2015-08-13 23:44:26', '2015-08-24 23:05:41');
INSERT INTO `issue_history` VALUES ('8', '78', '13102A0035', '2015-08-13 23:46:50', '2015-08-18 23:55:36');
INSERT INTO `issue_history` VALUES ('9', '102', '13102A0064', '2015-08-24 23:06:09', null);

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
) ENGINE=InnoDB AUTO_INCREMENT=121 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of library
-- ----------------------------
INSERT INTO `library` VALUES ('1', '1', '26', '7', '2', '');
INSERT INTO `library` VALUES ('2', '2', '4', '7', '12', '');
INSERT INTO `library` VALUES ('3', '3', '5', '5', '20', '');
INSERT INTO `library` VALUES ('4', '4', '17', '8', '14', '');
INSERT INTO `library` VALUES ('5', '4', '17', '8', '14', '');
INSERT INTO `library` VALUES ('6', '4', '46', '8', '14', '');
INSERT INTO `library` VALUES ('7', '4', '32', '4', '14', '');
INSERT INTO `library` VALUES ('8', '4', '32', '6', '14', '');
INSERT INTO `library` VALUES ('9', '5', '21', '3', '5', '');
INSERT INTO `library` VALUES ('10', '5', '62', '7', '5', '');
INSERT INTO `library` VALUES ('11', '5', '77', '7', '5', '');
INSERT INTO `library` VALUES ('12', '5', '3', '7', '5', '');
INSERT INTO `library` VALUES ('13', '5', '70', '7', '5', '');
INSERT INTO `library` VALUES ('14', '6', '62', '7', '5', '');
INSERT INTO `library` VALUES ('15', '7', '73', '7', '7', '');
INSERT INTO `library` VALUES ('16', '8', '76', '11', '8', '');
INSERT INTO `library` VALUES ('17', '9', '37', '1', '15', '');
INSERT INTO `library` VALUES ('18', '9', '51', '1', '15', '');
INSERT INTO `library` VALUES ('19', '9', '6', '1', '15', '');
INSERT INTO `library` VALUES ('20', '9', '34', '7', '15', '');
INSERT INTO `library` VALUES ('21', '9', '74', '7', '15', '');
INSERT INTO `library` VALUES ('22', '9', '37', '7', '15', '');
INSERT INTO `library` VALUES ('23', '10', '40', '7', '7', '');
INSERT INTO `library` VALUES ('24', '11', '41', '7', '9', '');
INSERT INTO `library` VALUES ('25', '12', '47', '7', '2', '');
INSERT INTO `library` VALUES ('26', '13', '43', '1', '4', '');
INSERT INTO `library` VALUES ('27', '14', '55', '1', '4', '');
INSERT INTO `library` VALUES ('28', '14', '55', '1', '4', '');
INSERT INTO `library` VALUES ('29', '15', '8', '9', '3', '');
INSERT INTO `library` VALUES ('30', '16', '24', '3', '17', '');
INSERT INTO `library` VALUES ('31', '17', '18', '7', '2', '');
INSERT INTO `library` VALUES ('32', '18', '38', '3', '2', '');
INSERT INTO `library` VALUES ('33', '18', '33', '7', '2', '');
INSERT INTO `library` VALUES ('34', '18', '38', '7', '2', '');
INSERT INTO `library` VALUES ('35', '18', '38', '7', '2', '');
INSERT INTO `library` VALUES ('36', '18', '61', '7', '2', '');
INSERT INTO `library` VALUES ('37', '18', '44', '8', '2', '');
INSERT INTO `library` VALUES ('38', '19', '42', '7', '2', '');
INSERT INTO `library` VALUES ('39', '19', '57', '7', '2', '');
INSERT INTO `library` VALUES ('40', '20', '67', '2', '22', '');
INSERT INTO `library` VALUES ('41', '20', '66', '9', '22', '');
INSERT INTO `library` VALUES ('42', '21', '14', '9', '18', '');
INSERT INTO `library` VALUES ('43', '22', '69', '7', '18', '');
INSERT INTO `library` VALUES ('44', '23', '9', '7', '10', '');
INSERT INTO `library` VALUES ('45', '24', '7', '7', '1', '');
INSERT INTO `library` VALUES ('46', '25', '13', '3', '1', '');
INSERT INTO `library` VALUES ('47', '26', '39', '7', '2', '');
INSERT INTO `library` VALUES ('48', '27', '1', '7', '1', '');
INSERT INTO `library` VALUES ('49', '28', '23', '2', '11', '');
INSERT INTO `library` VALUES ('50', '29', '53', '5', '1', '');
INSERT INTO `library` VALUES ('51', '30', '56', '3', '1', '\0');
INSERT INTO `library` VALUES ('52', '31', '31', '7', '1', '');
INSERT INTO `library` VALUES ('53', '32', '25', '7', '1', '');
INSERT INTO `library` VALUES ('54', '33', '30', '3', '19', '');
INSERT INTO `library` VALUES ('55', '34', '10', '3', '19', '');
INSERT INTO `library` VALUES ('56', '34', '10', '5', '19', '');
INSERT INTO `library` VALUES ('57', '35', '20', '7', '12', '');
INSERT INTO `library` VALUES ('58', '35', '20', '1', '12', '');
INSERT INTO `library` VALUES ('59', '36', '48', '2', '13', '');
INSERT INTO `library` VALUES ('60', '37', '29', '7', '2', '');
INSERT INTO `library` VALUES ('61', '38', '36', '7', '1', '');
INSERT INTO `library` VALUES ('62', '39', '72', '4', '14', '');
INSERT INTO `library` VALUES ('63', '39', '72', '6', '14', '');
INSERT INTO `library` VALUES ('64', '40', '20', '7', '15', '');
INSERT INTO `library` VALUES ('65', '41', '20', '1', '15', '');
INSERT INTO `library` VALUES ('66', '41', '20', '1', '15', '');
INSERT INTO `library` VALUES ('67', '42', '55', '1', '15', '');
INSERT INTO `library` VALUES ('68', '42', '52', '1', '15', '');
INSERT INTO `library` VALUES ('69', '43', '20', '9', '12', '');
INSERT INTO `library` VALUES ('70', '44', '50', '3', '12', '');
INSERT INTO `library` VALUES ('71', '45', '59', '1', '12', '');
INSERT INTO `library` VALUES ('72', '45', '59', '1', '12', '');
INSERT INTO `library` VALUES ('73', '46', '28', '3', '19', '');
INSERT INTO `library` VALUES ('74', '46', '28', '3', '19', '');
INSERT INTO `library` VALUES ('75', '46', '15', '3', '19', '');
INSERT INTO `library` VALUES ('76', '47', '71', '5', '19', '');
INSERT INTO `library` VALUES ('77', '48', '63', '10', '15', '');
INSERT INTO `library` VALUES ('78', '49', '27', '5', '19', '');
INSERT INTO `library` VALUES ('79', '50', '65', '4', '14', '');
INSERT INTO `library` VALUES ('80', '50', '11', '4', '14', '');
INSERT INTO `library` VALUES ('81', '50', '65', '6', '14', '');
INSERT INTO `library` VALUES ('82', '50', '68', '8', '14', '');
INSERT INTO `library` VALUES ('83', '51', '49', '8', '14', '');
INSERT INTO `library` VALUES ('84', '51', '64', '8', '14', '');
INSERT INTO `library` VALUES ('85', '52', '35', '7', '1', '');
INSERT INTO `library` VALUES ('86', '53', '2', '8', '2', '');
INSERT INTO `library` VALUES ('87', '54', '54', '7', '6', '');
INSERT INTO `library` VALUES ('88', '55', '16', '8', '6', '');
INSERT INTO `library` VALUES ('89', '56', '58', '8', '6', '');
INSERT INTO `library` VALUES ('90', '57', '75', '4', '6', '');
INSERT INTO `library` VALUES ('91', '57', '17', '8', '6', '');
INSERT INTO `library` VALUES ('92', '57', '75', '8', '6', '');
INSERT INTO `library` VALUES ('93', '57', '17', '8', '6', '');
INSERT INTO `library` VALUES ('94', '58', '16', '4', '6', '');
INSERT INTO `library` VALUES ('95', '58', '19', '6', '6', '');
INSERT INTO `library` VALUES ('96', '58', '19', '8', '6', '');
INSERT INTO `library` VALUES ('97', '58', '75', '8', '6', '');
INSERT INTO `library` VALUES ('98', '59', '12', '7', '16', '');
INSERT INTO `library` VALUES ('99', '60', '45', '3', '16', '');
INSERT INTO `library` VALUES ('100', '60', '22', '3', '16', '');
INSERT INTO `library` VALUES ('101', '60', '45', '3', '16', '');
INSERT INTO `library` VALUES ('102', '61', '60', '3', '16', '\0');
INSERT INTO `library` VALUES ('103', '62', '78', '12', '11', '');
INSERT INTO `library` VALUES ('105', '63', '80', '12', '1', '');
INSERT INTO `library` VALUES ('106', '3', '81', '12', '20', '');
INSERT INTO `library` VALUES ('107', '64', '82', '12', '12', '');
INSERT INTO `library` VALUES ('108', '7', '83', '13', '7', '');
INSERT INTO `library` VALUES ('109', '65', '84', '13', '21', '');
INSERT INTO `library` VALUES ('110', '66', '85', '13', '9', '');
INSERT INTO `library` VALUES ('111', '67', '12', '13', '7', '');
INSERT INTO `library` VALUES ('112', '48', '63', '12', '15', '');
INSERT INTO `library` VALUES ('113', '14', '55', '12', '4', '');
INSERT INTO `library` VALUES ('114', '20', '66', '9', '22', '');
INSERT INTO `library` VALUES ('115', '68', '86', '7', '2', '');
INSERT INTO `library` VALUES ('116', '69', '37', '1', '12', '');
INSERT INTO `library` VALUES ('118', '22', '87', '11', '18', '');
INSERT INTO `library` VALUES ('119', '70', '88', '1', '15', '');
INSERT INTO `library` VALUES ('120', '14', '55', '1', '4', '');

-- ----------------------------
-- Table structure for request_queue
-- ----------------------------
DROP TABLE IF EXISTS `request_queue`;
CREATE TABLE `request_queue` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `lib_id` int(11) unsigned NOT NULL,
  `student_id` varchar(32) NOT NULL,
  `request_date` datetime NOT NULL,
  PRIMARY KEY (`id`),
  KEY `fk_student_id` (`student_id`),
  KEY `fl_lib_id` (`lib_id`),
  CONSTRAINT `fk_student_id` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`) ON DELETE CASCADE ON UPDATE CASCADE,
  CONSTRAINT `fl_lib_id` FOREIGN KEY (`lib_id`) REFERENCES `library` (`id`) ON DELETE CASCADE ON UPDATE CASCADE
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of request_queue
-- ----------------------------

-- ----------------------------
-- Table structure for staff
-- ----------------------------
DROP TABLE IF EXISTS `staff`;
CREATE TABLE `staff` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=14 DEFAULT CHARSET=latin1;

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
INSERT INTO `staff` VALUES ('12', 'Sanjeev Dwivedi');
INSERT INTO `staff` VALUES ('13', 'Unknown');

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
INSERT INTO `students` VALUES ('13102A0035', 'Phaneesh Barwaria');
INSERT INTO `students` VALUES ('13102A0044', 'Wasiq Rumaney');
INSERT INTO `students` VALUES ('13102A0046', 'Chaitanya Lele');
INSERT INTO `students` VALUES ('13102A0064', 'Subhodeep Adak');
INSERT INTO `students` VALUES ('13106B0030', 'Aravind Damisetti');
INSERT INTO `students` VALUES ('13106B0033', 'Harsh Daga');
INSERT INTO `students` VALUES ('13106B0053', 'Hitanshu Varma');
INSERT INTO `students` VALUES ('14102A0055', 'Pritish Jaiswal');

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
issue_history.issue_date AS Issue_Date,
issue_history.return_date AS Return_Date,
TIMESTAMPDIFF(DAY, Issue_Date, IF(return_date IS NULL, CURDATE(), return_date)) AS Duration
FROM
issue_history
INNER JOIN library ON issue_history.lib_id = library.id
INNER JOIN books ON library.book_id = books.id
INNER JOIN `authors` ON library.author_id = `authors`.id
INNER JOIN staff ON issue_history.lib_id = library.id AND library.owner_id = staff.id
LEFT JOIN students ON issue_history.student_id = students.id
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
library.available AS Available,
Count(request_queue.id) AS In_Queue
FROM
((((library
JOIN staff ON ((library.owner_id = staff.id)))
JOIN books ON ((library.book_id = books.id)))
JOIN categories ON ((library.category_id = categories.id)))
JOIN `authors` ON ((library.author_id = `authors`.id)))
LEFT OUTER JOIN request_queue ON request_queue.lib_id = library.id
GROUP BY
library.id,
books.`name`,
`authors`.`name`,
categories.`name`,
staff.`name`,
library.available
ORDER BY
ID ASC ;
DROP TRIGGER IF EXISTS `Book_Issued`;
DELIMITER ;;
CREATE TRIGGER `Book_Issued` AFTER INSERT ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 0
WHERE library.id = new.lib_id
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `Book_Returned`;
DELIMITER ;;
CREATE TRIGGER `Book_Returned` AFTER UPDATE ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 1
WHERE library.id = new.lib_id
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `Row_Deleted`;
DELIMITER ;;
CREATE TRIGGER `Row_Deleted` AFTER DELETE ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 1
WHERE library.id = old.lib_id
;;
DELIMITER ;
