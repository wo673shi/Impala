SELECT '< HIVE-675: Add database/schema support for Hive QL >' AS ' ';
ALTER TABLE `DBS` MODIFY `DESC` VARCHAR(4000);
ALTER TABLE `DBS` ADD `DB_LOCATION_URI` VARCHAR(4000) NOT NULL DEFAULT '';
