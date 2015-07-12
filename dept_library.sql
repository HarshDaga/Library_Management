/*
Navicat MySQL Data Transfer

Source Server         : localhost_root
Source Server Version : 50617
Source Host           : localhost:3306
Source Database       : dept_library

Target Server Type    : MYSQL
Target Server Version : 50617
File Encoding         : 65001

Date: 2015-07-09 17:20:22
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for author
-- ----------------------------
DROP TABLE IF EXISTS `author`;
CREATE TABLE `author` (
  `id` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for books
-- ----------------------------
DROP TABLE IF EXISTS `books`;
CREATE TABLE `books` (
  `id` varchar(255) NOT NULL,
  `name` varchar(255) NOT NULL,
  `author` int(11) unsigned NOT NULL AUTO_INCREMENT,
  `edition` varchar(255) DEFAULT NULL,
  `category` varchar(255) DEFAULT NULL,
  PRIMARY KEY (`id`),
  KEY `author_idx` (`author`) USING BTREE,
  KEY `name_idx` (`name`) USING BTREE,
  CONSTRAINT `author_fk` FOREIGN KEY (`author`) REFERENCES `author` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for issue_history
-- ----------------------------
DROP TABLE IF EXISTS `issue_history`;
CREATE TABLE `issue_history` (
  `id` int(11) NOT NULL,
  `lib_id` int(11) NOT NULL,
  `student_id` varchar(32) NOT NULL,
  `issue_date` datetime NOT NULL,
  `return_date` datetime NOT NULL,
  PRIMARY KEY (`id`),
  KEY `library_id_idx` (`lib_id`) USING BTREE,
  KEY `student_id_idx` (`student_id`) USING BTREE,
  KEY `issue_date_idx` (`issue_date`) USING BTREE,
  CONSTRAINT `library_id_fk` FOREIGN KEY (`lib_id`) REFERENCES `library` (`id`),
  CONSTRAINT `student_id_fk` FOREIGN KEY (`student_id`) REFERENCES `students` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for library
-- ----------------------------
DROP TABLE IF EXISTS `library`;
CREATE TABLE `library` (
  `id` int(11) NOT NULL,
  `book_id` varchar(255) NOT NULL,
  `owner_id` varchar(255) NOT NULL,
  `available` bit(1) NOT NULL DEFAULT b'1',
  PRIMARY KEY (`id`),
  KEY `book_id_idx` (`book_id`) USING BTREE,
  KEY `owner_id_idx` (`owner_id`) USING BTREE,
  CONSTRAINT `book_id_fk` FOREIGN KEY (`book_id`) REFERENCES `books` (`id`),
  CONSTRAINT `owner_id_fk` FOREIGN KEY (`owner_id`) REFERENCES `staff` (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for staff
-- ----------------------------
DROP TABLE IF EXISTS `staff`;
CREATE TABLE `staff` (
  `id` varchar(255) NOT NULL,
  `name` varchar(255) NOT NULL,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- Table structure for students
-- ----------------------------
DROP TABLE IF EXISTS `students`;
CREATE TABLE `students` (
  `id` varchar(32) NOT NULL COMMENT 'Student Roll no.',
  `name` varchar(64) NOT NULL COMMENT 'Student Name',
  `div` varchar(255) NOT NULL COMMENT 'Student Division',
  `year` int(4) unsigned NOT NULL COMMENT 'Student Year',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- ----------------------------
-- View structure for view_library
-- ----------------------------
DROP VIEW IF EXISTS `view_library`;
CREATE ALGORITHM=UNDEFINED DEFINER=`root`@`localhost`  VIEW `view_library` AS SELECT
library.id AS ID,
books.`name` AS `Book Name`,
books.author AS Author,
books.edition AS Edition,
books.category AS Category,
staff.`name` AS `Owner`
FROM
library
INNER JOIN books ON library.book_id = books.id
INNER JOIN staff ON library.owner_id = staff.id ;
DROP TRIGGER IF EXISTS `Book_Issued`;
DELIMITER ;;
CREATE TRIGGER `Book_Issued` AFTER INSERT ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 0
WHERE library.id = lib_id
;;
DELIMITER ;
DROP TRIGGER IF EXISTS `Book_Returned`;
DELIMITER ;;
CREATE TRIGGER `Book_Returned` AFTER UPDATE ON `issue_history` FOR EACH ROW UPDATE dept_library.library
SET available = 1
WHERE library.id = lib_id
;;
DELIMITER ;
