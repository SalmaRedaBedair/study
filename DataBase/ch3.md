-database application is designed for particular database and assosiated programs that implement databse quiries and updates
-database design and software design methodologies are strongly are intertwined since their activites are strongly related
-The conceptual schema is a concise description of the data requirements of the users and includes detailed descriptions of the entity types, relationships, and constraints; 
========= Using High-Level Conceptual Data Models for Database Design ======
-schema: is adiagram that show how entities are related to each other
-first step requirements collection and analysis : database designer collect some data from users to understand and document their requirments
-the next step is to create conceptual schema such as ER
-The next step in database design is the actual implementation of the database using commerical DBMS such as SQL,this step is called (logical design or datamodel mapping)
-the last step is physical design during which the internal storage structures, file organizations, indexes, access paths, and physical design parameters for the database files are specified. In parallel with these activities, application programs are designed and implemented as database transactions corresponding to the high-level transaction specifications
-extention entity: collection pf intities of particular type is grouped into same structure
-weak entity type has no key 
-schema can be used to explain our app to nontechnical person and it is very useful for techenical person to make sure that requirements don't conflict
-schema help database designer to specifying properities of data without being concernening with storage and implementation details
logical design === data model mapping
-{Address_phone( {Phone(Area_code,Phone_number)},Address(Street_address(Number,Street,Apartment_number),City,State,Zip) )}==> A complex attribute:Address_phone
-multivalued {} 
-composite ()
====Entities===
-weak entity type has no key
-value sets(Domains) is the range of value of attribute
=======Relationship Degree, Role Names, and Recursive Relationships=====
-relationship degree: binary or ternery or heigher
  binary between 2 entities 
  ternery between 3 entities
-role name is very important if the relation is between the same entity. ex:employee supervisor another employee. this relation is called recursive relationship or self-refrencing relationship . we mark relation between them by numbers such as figure 3.11 page 106
====Participation Constraints and Existence Dependencies===
-employee must work for company total dependency 

======Attributes of Relationship Types====
-some relations has attributes as entities
   if relation is 1:m or 1:1 and have entity then that attribute is transfered from small to large
   if relation is n:m the atrribute is stay in table of that relation
==========Weak Entity Types==========
-do not have a key
-relation that connect weak entity with strong one is called identifying relationship
-a weak entity has partial key which is the unique identify wak entity
-In ER diagrams, both a weak entity type and its identifying relationship are distinguished by surrounding their boxes and diamonds with double lines (see Figure 3.2). The partial key attribute is underlined with a dashed or dotted line. dependent is in double
-Weak entity types can sometimes be represented as complex attribute.The choice of which representation to use is made by the database designer
==========ER Diagrams, Naming Conventions, and Design Issues============
-partial key of weak entity type is underlined with dashed line
-toatal participation and partial participation may be between 1:m or n:m not only 1:1
==========Proper Naming of Schema Constructs==========
-In our ER diagrams, we will use the convention that entity type and relationship type names are in uppercase letters, attribute names have their initial letter capitalized, and role names are in lowercase letters.
=============Design Choices for ER Conceptual Design==============
an attribute that exists in several entity types may be elevated or promoted to an independent entity type
